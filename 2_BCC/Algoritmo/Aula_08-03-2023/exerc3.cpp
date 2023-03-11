#include <iostream>

using namespace std;

void func(float &a, float &b, float &c){
    float maior = 0;
    float menor = 0;
    float media = ((a + b + c) / 3);

    maior = a;
    menor = a;

    if (b > maior){
        maior = b;
    }
    if (c > maior){
        maior = c;
    }
    if (b < menor){
        menor = b;
    }
    if (c < menor){
        menor = c;
    }

    a = media;
    b = maior;
    c = menor;
}

int main(){
    float a, b, c;

    cout << "Insira o valor de A: ";
    cin >> a;
    cout << "Insira o valor de B: ";
    cin >> b;
    cout << "Insira o valor de C: ";
    cin >> c;

    func(a, b, c);

    cout << "Media: " << a << endl;
    cout << "Maior: " << b << endl;
    cout << "Menor: " << c << endl;
}