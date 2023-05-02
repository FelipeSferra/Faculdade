#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

struct var{
	float x,y,z;
};

float CalcX(float Y, float Z){
	float X;
    
    X = (7 - (2*Y) - Z)/10;
    return X;
}
float CalcY(float X, float Z){
	float Y;
    
    Y = (-8 - X - Z)/5;
    return Y;
}
float CalcZ(float X, float Y){
	float Z;
    
    Z = (6 - (2*X) - (3*Y))/10;
    return Z;
}

float CalcEr(float valorK1, float valorK){
	float Er = 0;
    
    Er = (float)(valorK1 - valorK)/valorK1;
    
    if(Er < 0){
    	Er = Er * (-1);
    }
    
    return Er;
}

void AltEr(float &erro){
    cout << "Insira um novo valor para o erro: ";
    cin >> erro;
}

void imprimir(var *valores, int cont,float erro){
   
	cout << "\t\tImpressão de Iterações\n\n";
	cout << "Valor de erro utilizado no cálculo " << erro << endl;
	for(int i = 1; i < cont; i++){
    	cout << "\n" << i << "ª Iteração | K = " << (i-1) << ": " << endl;
        cout << "\nX["<< i << "]= " << valores[i].x << endl;
        cout << "Y["<< i << "]= " << valores[i].y << endl;
        cout << "Z["<< i << "]= " << valores[i].z << endl;
    }
    system("pause");
    return;
}

void calcular(var *valores, int &cont, float erro){
	int i = 1;
    float ErX = 0,ErY = 0,ErZ = 0;
    
	for (int saida = 1; i < 20 && saida!= 0; i++){
    	
		valores[i].x = CalcX(valores[i-1].y,valores[i-1].z);
        valores[i].y = CalcY(valores[i].x,valores[i-1].z);
        valores[i].z = CalcZ(valores[i].x,valores[i].y);
		
        ErX = (float)CalcEr(valores[i].x,valores[i-1].x);
        ErY = (float)CalcEr(valores[i].x,valores[i-1].x);
        ErZ = (float)CalcEr(valores[i].x,valores[i-1].x);
        
        cout << ErX << endl;
        cout << ErY << endl;
        cout << ErZ << endl;

        if(ErX <= erro){
        	if(ErY <= erro){
            	if(ErZ <= erro){
                	saida = 0;
                }
            }
        }

    }
    cont = i;
}

int main() {
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);

    var valores[20];
	int cont = 0;
    float erro = 0.01;
    char op = 'X';

    cout << fixed << setprecision(4);
    
    valores[0].x = 0;
    valores[0].y = 0;
    valores[0].z = 0;
    
  	while (op != '0'){
      system("cls");
      cout << "\n\tImplementação - Metodo Gauss-Seidel\n\n";
      cout << "[1] Calcular Iterações\n";
      cout << "[2] Alterar valor de Erro\n";
      cout << "[0] Sair\n";
      cout << "Escolha uma das opções: ";
      cin >> op;
      
      switch(op){
      	case '1': calcular(valores,cont,erro); imprimir(valores,cont,erro);break;
        case '2': AltEr(erro);break;
        default: system("cls");cout << "\n\n\n\t\tMuito obrigado por usar o programa!\n\n\n";break;
      }
    }
    SetConsoleOutputCP(CPAGE_DEFAULT);
}