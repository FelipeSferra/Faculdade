#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

const int N = 10;

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

bool bsc(Index *, int, int &, int);
void leituraPessoa(Pessoa *, int &);
void leituraIndice(Index *, int &);
void imprimirPessoa(Pessoa *, int);

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);

    int bsc_cod;
    int contP, contS, pos, endereco;

    Index s[N];
    Pessoa p[N];

    cout << "\tLeitura de Pessoas: \n\n";

    leituraPessoa(p, contP);

    cout << "\tLeitura de Indices: \n\n";

    leituraIndice(s, contS);

    cout << "\tBusca por indice: \n\n";

    cout << "Codigo de busca: ";
    cin >> bsc_cod;

    if (bsc(s, bsc_cod, pos, contS))
    {
        endereco = s[pos].end;
        imprimirPessoa(p, endereco);
    }
    else
    {
        cout << "Pessoa não encontrada!";
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
}

bool bsc(Index *s, int cod, int &pos, int cont)
{
    int i = 0, f = cont;
    int m = (i + f) / 2;

    for (; f >= i && cod != s[m].cod; m = (i + f) / 2)
    {
        if (cod > s[m].cod)
            i = m + 1;
        else
            f = m - 1;
    }

    if (cod == s[m].cod)
    {
        pos = m;
        return true;
    }

    return false;
}

void leituraPessoa(Pessoa *p, int &contP)
{
    int i = 0;

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
    contP = i - 1;
}

void leituraIndice(Index *s, int &contS)
{
    int i = 0;

    for (int saida = 1; i < N && saida != 0; i++)
    {
        cout << "Insira o código da pessoa: ";
        cin >> s[i].cod;

        if (s[i].cod > 0)
        {
            cout << "Insira o endereço de memória dos dados: ";
            cin >> s[i].end;
        }
        else
            saida = 0;
    }

    contS = i - 1;
}

void imprimirPessoa(Pessoa *p, int endereco)
{
    cout << "Código: " << p[endereco].codigo << endl;
    cout << "Nome: " << p[endereco].nome << endl;
    cout << "Endereço: " << p[endereco].endereco << endl;
    cout << "Cidade: " << p[endereco].cidade << endl;
    cout << "UF: " << p[endereco].UF << endl;
}