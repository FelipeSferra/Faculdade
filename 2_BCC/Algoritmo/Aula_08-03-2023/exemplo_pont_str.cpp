#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void imprime_str(const char *);
int main(){
    char vetStr[] = "Teste";
    cout << "A string = ";
    imprime_str(vetStr);
    cout << endl;
}
void imprime_str(const char *sptr){
    for (;*sptr!='\0';sptr++){
        cout << *sptr;
    }
}
// \0 é o final do vetor de strings, no caso a palavra "Teste" seria um vetor de 6 valores, 5 para letras e 1 para 
// \0 para indicar o final da string