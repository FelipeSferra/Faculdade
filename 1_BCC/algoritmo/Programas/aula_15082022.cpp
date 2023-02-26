//
// Criado por Felipe Sferra de Oliveira
// RA: 2211600147 
// Data: 15/08/2022.
//

#include <iostream>

using namespace std;

int main() {
    int media[1...1000];
    int CBS[2015..2019][1..1000][1..12];
    int i, j, k, A, mediaFunc, F, M;

    for (i = 2015; i < 2020; i++) {
        for (j = 1; j < 1001; j++) {
            for (k = 1; k < 13; k++) {
                CBS[i][j][k] = 0;
                cin >> CBS[i][j][k];
            }
        }
    }

    cin >> A;
    for (i = 2015; i < 2020; i++) {
        for (j = 1; j < 1001; j++) {
            for (k = 1; k < 13; k++) {
                if (A = i) {
                    media[j] = media[j] + CBS[i][j][k];
                }
            }
            media[j] = media[j] / 12;
            cout << media[j];
        }
    }

    cin >> M;
    cin >> F;
    for (i = 2015; i < 2020; i++) {
        for (j = 1; j < 1001; j++) {
            for (k = 1; k < 13; k++) {
                if (F = j) {
                    if (M = k) {
                        if (CBS[i][j][k] > 600) {
                            cout << i;
                        }
                    }
                }

            }
        }
    }

}