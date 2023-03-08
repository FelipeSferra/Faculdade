#include <allegro5.h>
#include <allegro_primitives.h>
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

int main(){
   ALLEGRO_DISPLAY *j = NULL;
    ALLEGRO_EVENT_QUEUE *fEventos = NULL;
    ALLEGRO_EVENT evento;

   al_init();
   al_init_primitives_addon();


   ALLEGRO_COLOR azul = al_map_rgb(0, 0, 255);
   ALLEGRO_COLOR vermelho=al_map_rgb(255,0,0);
   ALLEGRO_COLOR verde=al_map_rgb(0,255,0);
   ALLEGRO_COLOR amarelo=al_map_rgb(255,255,0);
   ALLEGRO_COLOR cinza=al_map_rgb(127,127,127);

   j = al_create_display(800, 600);

    fEventos = al_create_event_queue();

   CIRCULO c1={80, 80, 50, vermelho, 10, true, true};
   CIRCULO c2={400, 300, 60, amarelo, 8, false, true};
   RETANGULO r1 = {600, 400, 50, 50, azul, 5, true, true};
   RETANGULO r2 = {150, 450, 120, 60, verde, 5, true, true};

      al_clear_to_color(al_map_rgb(255,255,255));
      desenhaCirculo(c1);
      desenhaCirculo(c2);
      desenhaRetangulo(r1);
      desenhaRetangulo(r2);

      al_flip_display();

   al_rest(5);

}
