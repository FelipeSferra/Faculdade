//
// Criado por Felipe Sferra de Oliveira
// RA: 2211600147 
// Data: 16/08/2022.
//
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
int i;

void read(vector<int> &v, int n);

void write(vector<int> v, int i);

void random(vector<int> &v, int n);

int main() {
    vector<int> A;

    cout << "Insira os valores do vetor A: " << endl;

    read(A, 5);
    write(A, 0);


    vector<int> K;
    random(K, 7);


}


void random(vector<int> &v, int n) {
    double j;
    j = 1;
    v.resize(n);
    cout << "Valores randomicos: " << endl;
    for (i = 0; i < n; i++) {
        j = (double) j + j;

        v[i] =j;
        cout << "Elemento [" << i << "]: ";
        cout << v[i] << endl;

    }
}

void read(vector<int> &v, int n) {
    v.resize(n);
    for (i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> v[i];
    }
}

void write(vector<int> v, int i) {
    cout << "Valores: " << endl;
    for (i = 0; i < v.size(); i++) {
        cout << "elemento [" << i << "]: ";
        cout << v[i] << endl;
    }
}

