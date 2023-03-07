//includes principais
#include <iostream>
#include <locale.h>
using namespace std;

//includes de classes
#include "Estado.h"
#include "Cidade.h"
//includes de impressões do usuario
#include "Imprimir.h"

int main()
{
    setlocale(LC_ALL,"Portuguese");
    cout << "\n\nExemplo: uso classes Distema de Vendas" << endl;

    Estado estado1;
    // a partir do método da classe
    estado1.imprimir();
    estado1.ler();
    estado1.imprimir();

    Estado estado2(12,"São Paulo", "SP");
    // a partir da função criada
    imprimirEstado(estado2);
    lerEstado(estado2);
    imprimirEstado(estado2);


    return 0;
}
