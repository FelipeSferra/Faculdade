#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <locale.h>

using namespace std;

int main(){
    ALLEGRO_DISPLAY *j = NULL;

    al_init();
    j = al_create_display(800, 600);
    al_flip_display();
    
}
