//
// Created by felip on 13/06/2022.
//
#include <iostream>

using namespace std;

int main() {
    const int T = 3;
    int A [T][T], i, j, cont;

    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            cin >> A[i][j];
        }
    }
    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            if (A[i][j] != A[j][i]) {
                i = T;
                j = T;
                cont++;
            }
        }
    }
    if (cont = 0){
        cout << "Matriz A e simetrica";
    }
    else {
        cout << "Matriz A nao e simetrica";
    }
}