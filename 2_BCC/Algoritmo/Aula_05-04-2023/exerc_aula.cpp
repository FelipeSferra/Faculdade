//utilizado algoritmo de percorrer lista e busca simples
#include <iostream>
#include <windows.h>

using namespace std;

struct Lista{
    int id;
    char nome[30];
    char end [30];
    char cidade[25];
    char uf[2];
};

const int N = 2;

void leitura(Lista vet[], int i){
    cout << "\n\tCadastro elemento " << (i+1) << endl;
    vet[i].id = (i+1);
    cout << "\nNome: ";
    gets(vet[i].nome);
    cout << "Endereço: ";
    gets(vet[i].end);
    cout << "Cidade: ";
    gets(vet[i].cidade);
    cout << "UF: ";
    gets(vet[i].uf);
}

void percorrer(Lista *vet, int i){
    cout << "\n" << vet[i].id << "\t" << vet[i].nome << "\t" << vet[i].end << "\t" << vet[i].cidade << "\t" << vet[i].uf << endl;
}

void busca(Lista *vet){
    int id;
    cout << "\n\nRealize o ID de busca: ";
    cin >> id;
    for (int i = 0; i < N ;i++){
        if (vet[i].id == id){
            cout << "\nID Encontrado: ";
            percorrer(vet,i);
            i = N;
        }
        else if(vet[i].id != id && i == N -1){
            cout << "Valor não encontrado na lista";
        }
    }

}

int main(){
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);

    Lista vCad[N];
    for (int i = 0; i < N; i++){
        leitura(vCad,i);
    }
    for (int i = 0; i < N; i++){
        percorrer(vCad,i);
    }
    busca(vCad);

    SetConsoleOutputCP(CPAGE_DEFAULT);
}