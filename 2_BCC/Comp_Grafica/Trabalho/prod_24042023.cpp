#include <iostream>
#include <allegro5.h>
#include <allegro_primitives.h>
#include <allegro_image.h>
#include <stdio.h>
#include <math.h>
using namespace std;
                 // A     D      W      S      esq    dir    up    down
bool tecla[8] = {false, false, false, false, false, false, false, false};

struct RETANGULO{
    float x1, y1, w, h;
    ALLEGRO_BITMAP *img;
    bool visivel;
};

void desenhaRetangulo(RETANGULO r){
    if (r.visivel) {
        al_draw_rectangle(r.x1, r.y1, r.x1+r.w,r.y1+r.h, al_map_rgb(255,255,255), 0);
        al_draw_bitmap_region(r.img, 0, 0, 400, 300, r.x1, r.y1, 0);
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


int main(){
    ALLEGRO_DISPLAY *j = NULL;
    ALLEGRO_EVENT_QUEUE *fEventos = NULL;
    ALLEGRO_EVENT evento;
    ALLEGRO_BITMAP *imgFundo, *img[10];
    ALLEGRO_TIMER *timer;

    float x = 626, y = 442;

    al_init();
    al_init_primitives_addon();
    al_install_keyboard();
    al_install_mouse();
    al_init_image_addon();

    fEventos = al_create_event_queue();

    timer = al_create_timer(2.0);

    al_register_event_source(fEventos, al_get_mouse_event_source());
    al_register_event_source(fEventos, al_get_keyboard_event_source());
    al_register_event_source(fEventos, al_get_timer_event_source(timer));


    j = al_create_display(x,y);
    imgFundo = al_load_bitmap("fundo.jpg");

    RETANGULO r[10];

    for(int i = 0; i < 10; i++){
        char nome_arq[50];
        if(i == 0){
            sprintf(nome_arq, "pacman.png");
            img[i] = al_load_bitmap(nome_arq);
        }else{
            sprintf(nome_arq, "Fantasma%d.png", i);
            img[i] = al_load_bitmap(nome_arq);
        }
    }

    for(int i = 0; i < 10; i++){
        if (i == 0){
            r[i].x1 = 150;
            r[i].y1 = 250;
            r[i].w = 25;
            r[i].h = 25;
            r[i].img = img[i];
            r[i].visivel = true;
        }else{
            r[i].x1 = 70 * i;
            r[i].y1 = 45 * i;
            r[i].w = 30;
            r[i].h = 30;
            r[i].img = img[i];
            r[i].visivel = true;
        }
    }


    al_start_timer(timer);

    while (true) {
        al_wait_for_event_timed(fEventos, &evento, 0.01);

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

        if (tecla[0] || tecla[4])  r[0].x1 -= 5;
        if (tecla[1] || tecla[5])  r[0].x1 += 5;
        if (tecla[2] || tecla[6])  r[0].y1 -= 5;
        if (tecla[3] || tecla[7])  r[0].y1 += 5;

        al_clear_to_color(al_map_rgb(0,0,0));
        al_draw_bitmap(imgFundo, 0, 0, 0);
        for(int i = 0; i < 10; i++){
            desenhaRetangulo(r[i]);
        }

        for(int i = 1; i < 10; i++){

            if(colideRetangulo(r[0], r[i])){
                r[i].visivel = false;
            }else{
                r[i].visivel = true;
            }

        }

        al_flip_display();
    }
}
