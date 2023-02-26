//
// Criado por Felipe Sferra de Oliveira
// RA: 2211600147 
// Data: 26/07/2022.
//
// CONTINUAÇÃO AULA 25/07/2022

#include <iostream>

using namespace std;

const int T = 4;
string vCid[T];
int mapa[T][T] = {0, 1, 1, 0,
                  0, 0, 1, 0,
                  1, 0, 0, 1,
                  0, 0, 1, 0};
int i, j, k;

void cidade_0() {
    for (i = 0; i < T; i++) {
        cout << "Leia vCid: ";
        cin >> vCid[i];
    }
/*    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            cout << "Leia mapa: ";
            cin >> mapa[i][j];
        }
    }*/
}

void cidade_1() {
    int qtdchg, qtdsai;

    cout << "Leia k: ";
    cin >> k;
    qtdchg = 0;

    for (i = 0; i < T; i++) {
        if (mapa[i][k] == 1) {
            qtdchg++;
        }
    }
    qtdsai = 0;
    for (i = 0; i < T; i++) {
        if (mapa[k][i] == 1) {
            qtdsai++;
        }
    }
    cout << "Nome da cidade: " << vCid[k] << endl
         << "Quantidade de estradas de chegada: " << qtdchg << endl
         << "Quantidade de estradas de saida: " << qtdsai;
}

/*void cidade_2() {
    for (i = 0; i < T; i++) {
        if (mapa[k][i] == 1) {

        }
    }
}*/

int main() {
    cidade_0();
    cidade_1();
    return 0;
}