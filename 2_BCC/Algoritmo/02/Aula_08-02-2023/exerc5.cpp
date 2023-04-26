#include <iostream>

using namespace std;

int func_menor(int v[]);

int main (){
    int v[10], menor;

    for (int i=0; i< 10; i++){
        cout << "Informe o valor " << (i+1) << ": ";
        cin >> v[i];
    }

    menor = func_menor(v);

    cout << "Menor valor informado: " << menor;
}

int func_menor(int v[]){
    int menor = v[0];
    for(int i = 0; i < 10; i++){
        if (v[i] < menor){
            menor = v[i];
        }
    }
    return menor;
}