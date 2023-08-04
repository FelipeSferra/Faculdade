#include <iostream>
#include <string.h>

//refazer

using namespace std;

bool bsc(Index *, int cod, int &pos, int cont);

struct Index
{
    int cod, end;
};

struct Pessoa
{
    int codigo;
    char nome[40];
    char endereco[40];
    char cidade[20];
    char UF[2];
};

int main()
{
    const int N = 10;

    int bsc_cod;
    int contI, contJ, pos, i = 0, j = 0;

    Index s[N];
    Pessoa p[N];

    cout << "\tLeitura de Pessoas: \n\n";

    for (int saida = 1; i < N && saida != 0; i++)
    {
        cout << "Insira o código da pessoa: ";
        cin >> p[i].codigo;
        cin.ignore();

        if (p[i].codigo > 0)
        {
            cout << "Insira o nome: ";
            gets(p[i].nome);
            cout << "Insira o endereço: ";
            gets(p[i].endereco);
            cout << "Insira a cidade: ";
            gets(p[i].cidade);
            cout << "Insira o UF: ";
            gets(p[i].UF);
        }
        else
            saida = 0;
    }
    contI = i - 1;

    cout << "\tLeitura de Indices: \n\n";

    for (int saida = 1; j < contI && saida != 0; j++)
    {
        cout << "Insira o código da pessoa: ";
        cin >> s[j].cod;

        if (s[j].cod > 0)
        {
            cin >> s[j].end;
        }
        else
            saida = 0;
    }

    contJ = j - 1;

    cout << "\tBusca por indice: \n\n";

    cout << "Codigo de busca: ";
    cin >> bsc_cod;

    if (bsc(s, bsc_cod, pos, contJ))
    {
        
    }
}

bool bsc(Index *s, int cod, int &pos, int cont)
{

}