#include <iostream>
#include <math.h>
#include <iomanip>
#include <string.h>

using namespace std;

#ifndef ADVOGADO_H
    #include "..\headers\Advogado.h"
#endif
#ifndef TIPOPROC_H
    #include "..\headers\TipoProcesso.h"
#endif
#ifndef PROCESSO_H
    #include "..\headers\Processo.h"
#endif
#ifndef VARA_H
    #include "..\headers\Vara.h"
#endif
#ifndef FUNC_H
    #include "..\headers\functions.h"
#endif

int main(){
    TipoProc tipo1(1, "Tipo Teste");
    imprimirTipo(tipo1);

    Processo proc1(1, "Proc. Teste", "01/04/2023", "23:59");
    imprimirProc(proc1);

    Advogado adv1(1, "Felipe", "Assis", "SP", 19);
    imprimirAdvogado(adv1);

    Vara vara1(23, proc1, adv1, "Jefferson", 1500);
    imprimirVara(vara1); 
}