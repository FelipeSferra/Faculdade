
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //Variaveis
    const int T = 6;
    string vPais[T] = {"Brasil", "Argentina", "Paraguai", "Chile", "Peru","Uruguai"};
    string vDias[T] = {"Dia1", "Dia2", "Dia3", "Dia4", "Dia5", "Dia6"};
    int mPan[T][T] = {
            {23, 56, 78, 12, 19, 35},
            {45, 67, 28, 19, 64, 82},
            {51, 46, 19, 20, 37, 74},
            {89, 26, 48, 14, 53, 36},
            {67, 41, 34, 29, 16, 8},
            {7,  15, 19, 25, 9,  10}
    };
    int i, j;

    //Programa
   /* cout << "Leitura do vetor vPais \n";
    for (i = 0; i < T; i++) {
        cout << "Informe vPais [" << i << "] [" << j << "]: ";
        getline(cin, vPais[i]);
    }
    cout << "Leitura do vetor vDias \n";
    for (i = 0; i < T; i++) {
        cout << "Informe vDias [" << i << "] [" << j << "]: ";
        getline(cin, vDias[i]);
    }
    cout << "Leitura da Matriz mPan\n\n";
    for (i = 0; i < T; i++) {
        cout << "Informe mPan [" << i << "] [" << j << "]: ";
        cin >> mPan[i][j];

    }*/
    //Gerar matriz aleatoria
    cout << "Gerar Matriz mPan aleatoria\n\n";
    srand(time(NULL));
    for (i = 0; i < T; i++)
    for (j = 0; j < T; j++) {
        mPan [i] [j] % 101;
//        cout << "Informe mPan [" << i << "] [" << j << "]: ";
        cout << mPan[i][j];
    }
}

