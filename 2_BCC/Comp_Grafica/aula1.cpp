#include <allegro5.h>
#include <allegro_primitives.h>
#include <allegro_image.h>
#include <stdio.h>
#include <math.h>
                 // A     D      W      S      esq    dir    up    down
bool tecla[8] = {false, false, false, false, false, false, false, false};

typedef struct{
    float cx, cy, r;
    ALLEGRO_COLOR cor;
    float traco;
    bool preenchido;
    bool visivel;

void desenhaCirculo(){
  if (visivel) {
    if (preenchido){
      al_draw_filled_circle(cx, cy, r, cor);
    } else {
      al_draw_circle(cx, cy, r, cor, traco);
    }
  }
}

} CIRCULO;

typedef struct {
    float x1, y1, w, h;
    ALLEGRO_COLOR cor;
    float traco;
    bool preenchido;
    bool visivel;
} RETANGULO;

void desenhaCirculo(CIRCULO c){
  if (c.visivel) {
    if (c.preenchido){
      al_draw_filled_circle(c.cx, c.cy, c.r, c.cor);
    } else {
      al_draw_circle(c.cx, c.cy, c.r, c.cor, c.traco);
    }
  }
}
void desenhaRetangulo(RETANGULO r){
  if (r.visivel) {
   if (r.preenchido){
      al_draw_filled_rectangle(r.x1, r.y1, r.x1+r.w,
                    r.y1+r.h,r.cor);
   } else {
      al_draw_rectangle(r.x1, r.y1, r.x1+r.w,
                        r.y1+r.h, r.cor, r.traco);
   }
  }
}

bool colideCirculo ( CIRCULO c1, CIRCULO c2 ){
    float dx = c1.cx - c2.cx;
    float dy = c1.cy - c2.cy;
    float dist = sqrt( pow(dx, 2) + pow(dy, 2) );
    if ( dist < c1.r + c2.r ){
        return true;
    } else {
        return false;
    }
}

bool colideRetangulo (RETANGULO r1, RETANGULO r2){
    if ( r1.x1+r1.w > r2.x1 &&
         r2.x1+r2.w > r1.x1 &&
         r1.y1+r1.h > r2.y1 &&
         r2.y1+r2.h > r1.y1 ) {
        return true;
    } else {
        return false;
    }
}
bool colideRetanguloCirculo (RETANGULO r1, CIRCULO c1 ){
    RETANGULO r2;
    r2.x1 = c1.cx - c1.r*0.95;
    r2.y1 = c1.cy - c1.r*0.95;
    r2.w = c1.r * 1.9;
    r2.h = c1.r * 1.9;
    return colideRetangulo (r1, r2);
}

int main(){
   ALLEGRO_DISPLAY *j = NULL;
   ALLEGRO_EVENT_QUEUE *fEventos = NULL;
   ALLEGRO_EVENT evento;
   ALLEGRO_BITMAP *img;
   ALLEGRO_TIMER *timer;

   float imgX=800;


   al_init();
   al_init_primitives_addon();
   al_init_image_addon();
   al_install_keyboard();
   al_install_mouse();

   fEventos = al_create_event_queue();

   timer = al_create_timer(2.0);

   al_register_event_source(fEventos, al_get_mouse_event_source());
   al_register_event_source(fEventos, al_get_keyboard_event_source());
   al_register_event_source(fEventos, al_get_timer_event_source(timer));

   ALLEGRO_COLOR azul = al_map_rgb(0, 0, 255);
   ALLEGRO_COLOR vermelho=al_map_rgb(255,0,0);
   ALLEGRO_COLOR verde=al_map_rgb(0,255,0);
   ALLEGRO_COLOR amarelo=al_map_rgb(255,255,0);
   ALLEGRO_COLOR cinza=al_map_rgb(127,127,127);

   j = al_create_display(800, 600);
// #include <allegro_image.h>
// ALLEGRO_BITMAP *img;
// al_init_image_addon();
   img = al_load_bitmap("aviao.png");
   float imgW = al_get_bitmap_width(img);
   float imgH = al_get_bitmap_height(img);

   CIRCULO c1={80, 80, 50, vermelho, 10, true, true};
   CIRCULO c2={400, 300, 60, amarelo, 8, false, true};
   RETANGULO r1 = {600, 400, 50, 50, azul, 5, false, true};
   RETANGULO r2 = {150, 450, 120, 60, verde, 5, true, true};

   al_start_timer(timer);

   while (true) {

      //al_wait_for_event(fEventos, &evento);
      al_wait_for_event_timed(fEventos, &evento, 0.01);

      if (evento.type == ALLEGRO_EVENT_TIMER){
        imgX -= 1;
      }

      if (evento.type == ALLEGRO_EVENT_MOUSE_AXES){
         c1.cx = evento.mouse.x;
         c1.cy = evento.mouse.y;
      }

      if (evento.type == ALLEGRO_EVENT_KEY_CHAR){
         if(evento.keyboard.keycode == ALLEGRO_KEY_ESCAPE){
            break;
         }
      }

      if (evento.type == ALLEGRO_EVENT_KEY_DOWN){
         if(evento.keyboard.keycode == ALLEGRO_KEY_A){
            tecla[0] = true;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_D){
            tecla[1] = true;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_W){
            tecla[2] = true;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_S){
            tecla[3] = true;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_LEFT){
            tecla[4] = true;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_RIGHT){
            tecla[5] = true;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_UP){
            tecla[6] = true;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_DOWN){
            tecla[7] = true;
         }
      }
      if (evento.type == ALLEGRO_EVENT_KEY_UP){
          if(evento.keyboard.keycode == ALLEGRO_KEY_A){
            tecla[0] = false;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_D){
            tecla[1] = false;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_W){
            tecla[2] = false;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_S){
            tecla[3] = false;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_LEFT){
            tecla[4] = false;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_RIGHT){
            tecla[5] = false;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_UP){
            tecla[6] = false;
         }
         if(evento.keyboard.keycode == ALLEGRO_KEY_DOWN){
            tecla[7] = false;
         }
      }


      if (tecla[0])  c2.cx -= 10;
      if (tecla[1])  c2.cx += 10;
      if (tecla[2])  c2.cy -= 10;
      if (tecla[3])  c2.cy += 10;
      if (tecla[4])  r1.x1 -= 5;
      if (tecla[5])  r1.x1 += 5;
      if (tecla[6])  r1.y1 -= 5;
      if (tecla[7])  r1.y1 += 5;
      //printf("%f", c2.cx);

      if ( colideCirculo(c1, c2) ){
           c1.cor = cinza;
      } else {
           c1.cor = vermelho;
      }

      if ( colideRetangulo (r1, r2)){
          r1.preenchido = true;
      } else {
          r1.preenchido = false;
      }

      if (colideRetanguloCirculo (r1, c2)){
          c2.preenchido = true;
      } else {
          c2.preenchido = false;
      }

      al_clear_to_color(al_map_rgb(255,255,255));
      desenhaCirculo(c1);
      desenhaCirculo(c2);
      desenhaRetangulo(r1);
      desenhaRetangulo(r2);

      float ang = 45.0 * ALLEGRO_PI / 180.0;

      //al_draw_bitmap(img, 0, 0, 0);
      al_draw_scaled_bitmap(img,0,0,imgW,imgH, imgX, 200,imgW/2.0,imgH/2.0,0);
      //al_draw_rotated_bitmap(img,imgW/2.0, imgH/2.0,300,300,ang,0);

      //al_draw_scaled_rotated_bitmap
      //al_draw_bitmap_region(img, 0,0,imgW/2.0,imgH,0,100,0);
      //al_draw_bitmap_region(img, imgW/2.0,0,imgW/2,imgH,450,0,0);

      al_flip_display();

   }

}





