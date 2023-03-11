#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

#include "especialidade.h"
#include "profissional.h"
#include "servico.h"
#include "tarefa.h"
#include "tipotarefa.h"

void line();

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);

    cout << "\n\tTeste Classe Especialidade\n\n";
    Especialidade espec1;
    espec1.imprimir();
    line();
    espec1.ler();
    line();
    espec1.imprimir();

    Especialidade espec2(109,"Essa é uma especialidade",3);
    line();
    espec2.imprimir();
    line();

    cout << "\n\tTeste Classe Profissional";
    Profissional prof1;
    prof1.imprimir();
    line();
    prof1.ler();
    line();
    prof1.imprimir();

    Profissional prof2(215,"Felipe","31 de Outubro de 2003",109);
    line();
    prof2.imprimir();
    line();

    Servico serv1;
    serv1.imprimir();
    line();
    serv1.ler();
    line();
    serv1.imprimir();
    
    Servico serv2(19,215,10,9.55,616.50,'X');
    serv2.imprimir();

    SetConsoleOutputCP(CPAGE_DEFAULT);
}

void line(){
    for (int i = 0; i < 50; i++){
        cout << "-";
    }
}