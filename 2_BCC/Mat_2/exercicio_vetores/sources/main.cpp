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
    Vetores A;
    lerVet(A);
    
    Vetores B;
    lerVet(B);

    Vetores C;
    lerVet(C);

    mainMenu(A,B,C);
} 