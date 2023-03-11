#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

#include "Especialidade.h"
#include "Profissional.h"
#include "Servico.h"
#include "Tarefa.h"
#include "tipoTarefa.h"

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

    Especialidade espec2(109,"Esse é um teste de especialidade",3);
    line();
    espec2.imprimir();
    line();
    


    cout << "\n\tTeste Classe Profissional\n\n";
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

    cout << "\n\tTeste Classe Serviço\n\n";
    Servico serv1;
    serv1.imprimir();
    line();
    serv1.ler();
    line();
    serv1.imprimir();
    
    Servico serv2(19,215,10,9.55,616.50,'X');
    line();
    serv2.imprimir();
    line();

    cout << "\n\tTeste Classe Tarefa\n\n";
    Tarefa tarefa1;
    tarefa1.imprimir();
    line();
    tarefa1.ler();
    line();
    tarefa1.imprimir();

    Tarefa tarefa2(10,"Isso é um teste de Tarefa",12,250.5,8.0);
    line();
    tarefa2.imprimir();
    line();

    cout << "\n\tTeste Classe TipoTarefa\n\n";
    TipoTarefa tipo1;
    tipo1.imprimir();
    line();
    tipo1.ler();
    line();
    tipo1.imprimir();

    TipoTarefa tipo2(12,"Esse é um teste de tipo de tarefa");
    line();
    tipo2.imprimir();
    line();

    SetConsoleOutputCP(CPAGE_DEFAULT);
}

void line(){
    for (int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << "\n\n";
}