#include <iostream>
using namespace std;

#include "Data.h"
int main()
{
    cout << "\nPrograma Uso Classe Data\n";

    Data data1;
    data1.imprimir();

    Data data2(29, 2, 2023);
    data2.imprimir();

    cout << "\nDia: " << data2.getDia() << endl;

    data1.setAno(2023);
    data1.setMes(6);
    data1.setDia(31);


    data1.imprimir();

    cout << endl << endl;
}
