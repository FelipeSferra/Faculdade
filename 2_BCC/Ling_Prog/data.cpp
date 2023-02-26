#include <iostream>
#include "data.h"

using namespace std;

int main(){
	int testeGet;
    data Data1;
    Data1.imprimir();
    
    data Data2(23,10,2019);
    Data2.imprimir();
    
    data Data3;
    Data3.ler();
    Data3.imprimir();
    
    data Data4;
    Data4.setDia(22);
    Data4.setMes(1);
    Data4.setAno(2005);
    Data4.imprimir();
    
    testeGet = Data2.getDia();
    cout << endl << testeGet << endl;
    testeGet = Data3.getMes();
    cout << testeGet << endl;
    testeGet = Data4.getAno();
    cout << testeGet << endl;
}
