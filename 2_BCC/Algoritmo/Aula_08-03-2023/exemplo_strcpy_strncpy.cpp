#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char x[] = "Feliz aniversario para voce";
    char y [28], z[18], w[28];

    cout << "A string do vetor x: " << x << endl;
    cout << "A string do vetor y: " << strcpy(y,x) << endl;
    strncpy(z,x,17);
    z[18] = '\0';
    cout << "A string do vetor z: " << z << endl;
    

}