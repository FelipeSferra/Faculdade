#include <iostream>
#include <allegro5.h>
#include <allegro_primitives.h>
#include <locale.h>

using namespace std;

struct rect{
    int x,y;
    int w,h;
};

struct circle{
    int x,y;
    int r;
};

void drawRect(rect r, int R, int G, int B);
void drawCircle(circle c, int R, int G, int B);
int opRect();
int opCircle();
int menu();

int main(){
    setlocale(LC_ALL,"Portuguese");
    char op = 'X';

    while (op != '0'){
        system("cls");
        cout << "\tExercício - Comp. Gráfica\n";
        menu();
        cout << "\n[01] Desenhar um Retângulo\n";
        cout << "[02] Desenhar um Círculo\n";
        cout << "[00] Fechar o programa\n";
        menu();
        cout << "\nInforme a opção desejada: ";
        cin >> op;

        switch(op){
        case '1': opRect(); break;
        case '2': opCircle(); break;
        case '0': system("cls");cout << "\n\n\t\tObrigado por usar o programa!\n\n";break;
        }
    }
}

int opRect(){
    rect r;
    int R,G,B;

    system("cls");

    cout << "\tParametros do retangulo\n\n";

    cout << "Digite a posicao X do retangulo: ";
    cin >> r.x;

    cout << "Digite a posicao Y do retangulo: ";
    cin >> r.y;

    cout << "Digite a largura do retangulo: ";
    cin >> r.w;

    cout << "Digite a altura do retangulo: ";
    cin >> r.h;

    system("cls");

    cout << "\tCor do retangulo\n\n";

    cout << "Digite o valor de R(vermelho): ";
    cin >> R;

    cout << "Digite o valor de G(verde): ";
    cin >> G;

    cout << "Digite o valor de B(azul): ";
    cin >> B;


    drawRect(r,R,G,B);

    return 0;
}
int opCircle(){
    circle c;
    int R, G, B;

    system("cls");

    cout << "\tParametros do circulo\n\n";

    cout << "Digite a posicao X do circulo: ";
    cin >> c.x;

    cout << "Digite a posicao Y do circulo: ";
    cin >> c.y;

    cout << "Digite o raio do circulo: ";
    cin >> c.r;

    system("cls");

    cout << "\tCor do circulo\n\n";

    cout << "Digite o valor de R(vermelho): ";
    cin >> R;

    cout << "Digite o valor de G(verde): ";
    cin >> G;

    cout << "Digite o valor de B(azul): ";
    cin >> B;

    drawCircle(c,R,G,B);

    return 0;
}

void drawRect(rect r, int R, int G, int B){
    al_init();
    al_init_primitives_addon();

    ALLEGRO_DISPLAY *j = al_create_display(800,600);

    al_draw_filled_rectangle(r.x,r.y,r.x+r.w,r.y+r.h,al_map_rgb(R,G,B));

    al_flip_display();

    al_rest(5.0);

    al_destroy_display(j);

}

void drawCircle(circle c, int R, int G, int B){
    al_init();
    al_init_primitives_addon();

    ALLEGRO_DISPLAY *j = al_create_display(800,600);

    al_draw_filled_circle(c.x,c.y,c.r,al_map_rgb(R,G,B));

    al_flip_display();

    al_rest(5.0);

    al_destroy_display(j);
}

int menu(){
    cout << endl;
    for (int i = 0; i <= 50; i++){
        cout << "-";
    }
    cout << endl;
    return 0;
}
