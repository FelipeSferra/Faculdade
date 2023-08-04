#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

double func(double);
double zeroFunc(double,double,double);


int main() {
        UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);
    double a, b, precisao, raiz;
    
    cout << "\n\t<==|Implementação zeros da função|==>\n\n";
    
    cout << "Informe o valor inicial do intervalo A: ";
    cin >> a;
    
    cout << "Informe o valor final do intervalo B: ";
    cin >> b;
    
    cout << "Informe a precisão desejada: ";
    cin >> precisao;

   raiz = zeroFunc(a, b, precisao);

    cout << "\n\nA raiz da função está próxima de x = " << raiz << endl;
    SetConsoleOutputCP(CPAGE_DEFAULT);
    return 0;
}

double func(double x) {
    return sin(x) - cos(x);
}

double zeroFunc(double a, double b, double precisao) {
    double c, result;
    while (fabs(b - a) > precisao) {
        c = (a + b) / 2;

        if (func(c) == 0.0) {
            return c;
        } else if (func(c) * func(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    result = (a + b) / 2;
    return result;
}