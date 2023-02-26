#include <iostream>

using namespace std;

int main()
{
    int vet[10], menor, maior, soma, cont = 10;

    for (int i = 0; i < 10; i++)
    {
        cout << "Informe o valor " << (i+1) << ": ";
        cin >> vet[i];
        if (vet[i] == (vet[i - 1]) + 1)
        {
            cont = i + 1;
            i = 10;
        }
    }

    menor = vet[0];
    maior = vet[0];
    soma = vet[0];

    for (int i = 1; i < cont; i++)
    {
        if (vet[i] < menor)
        {
            menor = vet[i];
        }
        else
        {
            if (vet[i] > maior)
            {
                maior = vet[i];
            }
        }
        soma = soma + vet[i];
    }

    cout << "Menor => " << menor;
    cout << "\nMaior => " << maior;
    cout << "\nMedia dos valores => " << (float) soma/cont;
    cout << "\nSoma => " << soma;
}