//includes principais
#include <iostream>
#include <locale.h>
using namespace std;

//includes de classes
#include "Estado.h"
#include "Cidade.h"
//includes de impress�es do usuario
#include "Imprimir.h"

int main()
{
    setlocale(LC_ALL,"Portuguese");
    cout << "\n\nExemplo: uso classes Distema de Vendas" << endl;

    Estado estado1;
    // a partir do m�todo da classe
    estado1.imprimir();
    estado1.ler();
    estado1.imprimir();

    Estado estado2(12,"S�o Paulo", "SP");
    // a partir da fun��o criada
    imprimirEstado(estado2);
    lerEstado(estado2);
    imprimirEstado(estado2);


    return 0;
}
