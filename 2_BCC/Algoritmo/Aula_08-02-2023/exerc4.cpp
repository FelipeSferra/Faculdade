#include <iostream>

using namespace std;

int func_menor(int a, int b);

int main (){
    int a, b, menor;

    cout << "Informe o valor de A: ";
    cin >> a;
    cout << "Informe o valor de B: ";
    cin >> b;

    menor = func_menor(a,b);

    cout << "Menor valor informado: " << menor;
}

int func_menor(int a, int b){
    int menor = 0;
    if (a < b){
        menor = a;
    }else{
        menor = b;
    }
    return menor;
}