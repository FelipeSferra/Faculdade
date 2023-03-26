#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Div_Menu();
void lerVet(float *,float *, float *);
void Soma(float *,float *, float *);
void Sub(float *,float *, float *);
void Mult(float *,float *, float *);
void Mod(float *,float *, float *);
void prodEscal(float *,float *, float *);

const int N = 3;

int main(){
    float vetA[N], vetB[N], vetC[N];
    char op = 'X';
    

    lerVet(vetA,vetB,vetC);
    
    cout << fixed << setprecision(2) << endl;

    while (op != '0'){
    system("cls");
    cout << "\n\tPrograma - Implementação de operações com vetores\n\n";
    Div_Menu();
    cout << "[01] Operação: Soma\n";
    cout << "[02] Operação: Subtração\n";
    cout << "[03] Operação: Multiplicação\n";
    cout << "[04] Operação: Módulo\n";
    cout << "[05] Operação: Produto Escalar\n";
    cout << "[00] Fechar o Programa\n";

    cout << "Insira a opção desejada: ";
    cin >> op;

    switch (op)
    {
    case '1': Soma(vetA,vetB,vetC);break;
    case '2': Sub(vetA,vetB,vetC);break;;
    case '3': ;
    case '4': ;
    case '5': ;
    
    default:
        system("cls");
        cout << "\n\n\t\tMuito obrigado por usar o programa!!\n\n";
        break;
    }
    }

    
}
void Soma(float *vet1, float *vet2, float *vet3){
    float x[N], y[N], z[N];
    system("cls");
    cout << "\n\tOperação: Soma\n\n";
    Div_Menu();
    
    for(int i = 0; i < N; i++){
        x[i] = vet1[i] + vet2[i];
        y[i] = vet2[i] + vet3[i];
        z[i] = vet1[i] + vet3[i];
    }

    cout << "O resultado da soma dos vetores: "<< endl;
    cout << "A+B = [" << x[0] << "," << x[1] << "," << x[2] << "] \n";
    cout << "B+C = [" << y[0] << "," << y[1] << "," << y[2] << "] \n";
    cout << "A+C = [" << z[0] << "," << z[1] << "," << z[2] << "] \n";

    system("pause");
    return;
}
void Sub(float *vet1, float *vet2, float *vet3){
    float x[N], y[N], z[N];
    system("cls");
    cout << "\n\tOperação: Subtração\n\n";
    Div_Menu();
    
    for(int i = 0; i < N; i++){
        x[i] = vet1[i] - vet2[i];
        y[i] = vet2[i] - vet3[i];
        z[i] = vet1[i] - vet3[i];
    }

    cout << "O resultado da subtração dos vetores: "<< endl;
    cout << "A-B = [" << x[0] << "," << x[1] << "," << x[2] << "] \n";
    cout << "B-C = [" << y[0] << "," << y[1] << "," << y[2] << "] \n";
    cout << "A-C = [" << z[0] << "," << z[1] << "," << z[2] << "] \n";

    system("pause");
    return;
}
void Mult(float *vet1, float *vet2, float *vet3){
    float x[N], y[N], z[N], K;
    system("cls");
    cout << "\n\tOperação: Multiplicação\n\n";
    Div_Menu();
    
    cout << "Insira o valor do multiplicador para o vetor A: ";
    cin >> K;
    for(int i = 0; i < N; i++){
        
    }

    cout << "Insira o valor do multiplicador para o vetor B: ";
    cin >> K;
    for(int i = 0; i < N; i++){
        
    }

    cout << "Insira o valor do multiplicador para o vetor C: ";
    cin >> K;
    for(int i = 0; i < N; i++){
        
    }

    cout << "O resultado da multiplicação dos vetores: "<< endl;
    cout << K << "*A = [" << x[0] << "," << x[1] << "," << x[2] << "] \n";
    cout << K << "*B = [" << y[0] << "," << y[1] << "," << y[2] << "] \n";
    cout << K << "*C = [" << z[0] << "," << z[1] << "," << z[2] << "] \n";

    system("pause");
    return;
}
void prodEscal(float *vet1, float *vet2, float *vet3){

}

void Div_Menu(){
    for (int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << "\n\n";
}
void lerVet(float *vet1, float *vet2, float *vet3){
    cout << "\n\tLeitura de Vetores\n\n";
    Div_Menu();
    cout << "Insira os valores do vetor A: " << endl;
    for (int i = 0; i < N;i++){
        cout << "Insira o valor [" << (i+1) << "]: ";
        cin >> vet1[i];
    }

    cout << "Insira os valores do vetor B: " << endl;
    for (int i = 0; i < N;i++){
        cout << "Insira o valor [" << (i+1) << "]: ";
        cin >> vet2[i];
    }

    cout << "Insira os valores do vetor C: " << endl;
    for (int i = 0; i < N;i++){
        cout << "Insira o valor [" << (i+1) << "]: ";
        cin >> vet3[i];
    }
}