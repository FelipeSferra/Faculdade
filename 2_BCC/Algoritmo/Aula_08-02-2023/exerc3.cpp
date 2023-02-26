#include <iostream>

using namespace std;

int Maior(int v[],int cont);
int Menor(int v[],int cont);
int Soma(int v[],int cont);

int main(){
    int vet[10],mai,men,result, cont=10;
    float md;

    for (int i = 0; i < 10; i++){
        cout << "Informe o valor " << (i+1) << ": ";
        cin >> vet[i];
        if (vet[i] == (vet[i - 1]) + 1)
        {
            cont = i + 1;
            i = 10;
        }
    }

    men = Menor(vet,cont);
    mai = Maior(vet,cont);
    result = Soma(vet,cont);
    md = (float) result/cont;

    cout << "Maior => " << mai;
    cout << "\nMenor => " << men;
    cout << "\nSoma => " << result;
    cout << "\nMedia => " << md;
}

int Maior(int v[], int cont){
    int mai = v[0];
    for (int i = 1; i < cont; i++){
        if (v[i] > mai){
            mai = v[i];
        }
    }
    return (mai);
}

int Menor(int v[], int cont){
    int men = v[0];
    for (int i = 1; i < cont; i++){
        if (v[i] < men){
            men = v[i];
        }
    }
    return (men);
}

int Soma(int v[], int cont){
    int result = 0;

    for (int i = 0; i < cont ; i++){
        result = result + v[i];
    }
    return (result);
}