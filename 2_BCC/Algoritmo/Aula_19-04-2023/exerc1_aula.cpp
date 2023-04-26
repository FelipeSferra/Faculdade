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

void ler(clientes *v, int &contador)
{
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

void inclusao(clientes *S, int contS, clientes *T, int contT, clientes *A, int contA){
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
void imprimir(clientes *vet, int contV){
    for(int i = 0; i < contV; i++){
        cout << "Código: " << vet[i].cod << endl;
        cout << "Nome: " << vet[i].nome << endl;
        cout << "Endereço: " << vet[i].end << endl;
        cout << "Cidade: " << vet[i].cidade << endl;
        cout << "UF: " << vet[i].UF << endl;
    }
}
int main()
{
    SetConsoleOutputCP(65001);

    clientes S[20], T[20], A[40];
    int contS, contT, contA;
    
    cout << "\n\tLeitura do arquivo S\n\n";
    ler(S, contS);
    cout << "\n\tLeitura do arquivo T\n\n";
    ler(T, contT);

    inclusao(S,contS,T,contT,A,contA);
    imprimir(A,contA);


    SetConsoleOutputCP(850);
}