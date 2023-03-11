#include <iostream>

using namespace std;

void Media(int &a, float &b);

int main(){
    int a;
    float b;

    cout << "Insira a nota 1: ";
    cin >> a;
    cout << "Insira a nota 2: ";
    cin >> b;

    Media(a,b);

    cout << "Soma das notas: " << a << endl;
    cout << "Media das notas: " << b << endl;
}

void Media(int &a, float &b){
    a = a + b;
    b = (float) a/2;
}