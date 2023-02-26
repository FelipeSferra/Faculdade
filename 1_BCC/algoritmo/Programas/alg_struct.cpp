//
// Criado por Felipe Sferra de Oliveira
// RA: 2211600147 
// Data: 06/10/2022.
//
#include <iostream>

using namespace std;

typedef struct {
    int id;
    string info;
} Nolls;

int main() {

    const int N = 10;
    Nolls lst[N], val;
    int final, aux;
    string conf;
    bool sinal;

    //Inicio

    final = -1;
    sinal = final; //falso

    if (final != N - 1) {
        cin >> val.id >> val.info >> conf;
        if (conf == "S" || "s") {
            final++;
            lst[final] = val;
            sinal = true;
            
        } else {
            cout << "Dados não confirmados..." << endl;
        }
    } else {
        cout << "Overflow - Lista cheia";
    }
/*    teste num1, num2, texto;

    num1.inteiro = 10;
    num2.inteiro = 25;
    texto.recado = "esse e um teste de estrutura";

    cout << texto.recado << endl;
    cout << num1.inteiro << endl;
    cout << num2.inteiro << endl;*/
}