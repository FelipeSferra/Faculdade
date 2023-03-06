#include <iostream>
#include <windows.h>
#include "especialidade.h"

using namespace std;

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);

    especialidade teste;
    teste.imprimir();
    
    teste.ler();
    teste.imprimir();

    SetConsoleOutputCP(CPAGE_DEFAULT);
}