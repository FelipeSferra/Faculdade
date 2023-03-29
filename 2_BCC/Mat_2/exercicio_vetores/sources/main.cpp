#include <iostream>
#include <iomanip>
#include <locale.h>
#include <math.h>

using namespace std;

#ifndef Vetores_H
    #include "..\headers\vetores.h"
#endif

#ifndef Functions_H
    #include "..\headers\functions.h"
#endif

#ifndef Menu_H
    #include "..\headers\menu.h"
#endif

int main(){
    setlocale(LC_ALL,"Portuguese");

    cout << fixed << setprecision(3);

    Vetores A;
    cout << "\n\tLeitura do vetor A\n\n";
    lerVet(A);

    Vetores B;
    cout << "\n\tLeitura do vetor B\n\n";
    lerVet(B);

    Vetores C;
    cout << "\n\tLeitura do vetor C\n\n";
    lerVet(C);

    mainMenu(A,B,C);
}
