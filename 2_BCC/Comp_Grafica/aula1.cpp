#include <allegro5.h>
#include <allegro_primitives.h>

int main(){
    ALLEGRO_DISPLAY *j = NULL;
    ALLEGRO_COLOR branco,amarelo,preto;
    al_init();
    al_init_primitives_addon();

    j = al_create_display(800,600);

    amarelo = al_map_rgb(255,255,0);
    branco = al_map_rgb(255,255,255);
    preto = al_map_rgb(0,0,0);



    al_clear_to_color(preto);

    al_draw_filled_circle(300,300,100,amarelo);


    al_flip_display();
    al_rest(2);

}
