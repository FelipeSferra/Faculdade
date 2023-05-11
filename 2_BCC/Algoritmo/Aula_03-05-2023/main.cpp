#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;

struct clientes
{
    int cod;
    char nome[40];
    char end[30];
    char cidade[15];
    char UF[3];
};

void menuInclusao(clientes *, clientes *, clientes *, int &, int &, int &);
void menuPrincipal(clientes *, clientes *, clientes *, int &, int &, int &);
void imprimirVet(clientes *, int);
void inclusao(clientes *, int &, clientes *, int &, clientes *, int &);
void lerVet(clientes *, int &);
int main(){
    SetConsoleOutputCP(65001);
    
    clientes S[20], T[20], A[40];
    int contS, contT, contA;

    menuPrincipal(S,T,A,contS,contT,contA);
    

    SetConsoleOutputCP(850);
}

void menuPrincipal(clientes *S, clientes *T, clientes *A, int &contS, int &contT, int &contA)
{    
    char op = 'X';

    while (op != '0')
    {
        cout << "\n\t<\\--Controle de Clientes--/>\n\n";

        cout << "[01] - Inclusão de Clientes\n";
        cout << "[02] - Exclusão de Clientes\n";
        cout << "[00] - Sair\n";

        cout << "Selecione a opção: ";
        cin >> op;

        switch (op)
        {
        case '1':
            menuInclusao(S, T, A, contS, contT, contA);
            break;
        }
    }
}

void menuInclusao(clientes *S, clientes *T, clientes *A, int &contS, int &contT, int &contA)
{
    system("cls");
    char op = 'X';

    while (op != '0')
    {
        cout << "\n\t<\\--Menu de Inclusão de Clientes--/>\n\n";

        cout << "[01] - Incluir valores Lista S\n";
        cout << "[02] - Incluir valores Lista T\n";
        cout << "[03] - Imprimir Lista A\n";
        cout << "[00] - Voltar para o menu principal\n";

        cout << "Selecione a opção: ";
        cin >> op;

        switch(op){
            case '1': lerVet(S,contS);break;
            case '2': lerVet(T,contT);break;
            case '3': inclusao(S,contS,T,contT,A,contA); imprimirVet(A,contA);break;

            default: break;
        }
    }
}

void lerVet(clientes *v, int &contador){
    int i = 0;
    for (int saida = 1; i < 20 && saida != 0; i++)
    {
        cout << "\nCadastro do cliente " << (i+1) << "\n\n";
        cout << "Código: ";
        cin >> v[i].cod;
        cin.ignore();
        if (v[i].cod > 0)
        {
            cout << "Nome: ";
            gets(v[i].nome);
            cout << "Endereço: ";
            gets(v[i].end);
            cout << "Cidade: ";
            gets(v[i].cidade);
            cout << "UF: ";
            gets(v[i].UF);
        }
        else
            saida = 0;
    }
    contador = i - 1;
}

void imprimirVet(clientes *vet, int contV){
    for(int i = 0; i < contV; i++){
        cout << "Código: " << vet[i].cod << endl;
        cout << "Nome: " << vet[i].nome << endl;
        cout << "Endereço: " << vet[i].end << endl;
        cout << "Cidade: " << vet[i].cidade << endl;
        cout << "UF: " << vet[i].UF << endl;
    }
}

void inclusao(clientes *S, int &contS, clientes *T, int &contT, clientes *A, int &contA){
    int i=0, j=0, k=0;

    for(; i < contS && j < contT;k++){
        if(S[i].cod < T[j].cod){
            A[k].cod = S[i].cod;
            strcpy(A[k].nome,S[i].nome);
            strcpy(A[k].end,S[i].end);
            strcpy(A[k].cidade,S[i].cidade);
            strcpy(A[k].UF,S[i].UF);
            i++;
        }else{
            A[k].cod = T[j].cod;
            strcpy(A[k].nome,T[j].nome);
            strcpy(A[k].end,T[j].end);
            strcpy(A[k].cidade,T[j].cidade);
            strcpy(A[k].UF,T[j].UF);
            j++;
        }
        while(i < contS){
            A[k].cod = S[i].cod;
            strcpy(A[k].nome,S[i].nome);
            strcpy(A[k].end,S[i].end);
            strcpy(A[k].cidade,S[i].cidade);
            strcpy(A[k].UF,S[i].UF);
            i++;
            k++;
        }
        while(j < contT){
            A[k].cod = T[j].cod;
            strcpy(A[k].nome,T[j].nome);
            strcpy(A[k].end,T[j].end);
            strcpy(A[k].cidade,T[j].cidade);
            strcpy(A[k].UF,T[j].UF);
            j++;
            k++;
        }

        contA = k;
    }

}