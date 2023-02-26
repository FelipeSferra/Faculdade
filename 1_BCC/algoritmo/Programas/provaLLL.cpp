//listaLig.cpp
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <clocale>
using namespace std;

struct NOLLL {
	int id;
	string info;
	NOLLL *prox;
};

int i;
NOLLL *il, *fl, *aux;
char conf;
bool sinal;

void InsPrimNo(){
	sinal = false;
	if (il == NULL){
		aux = new (NOLLL);
		if(aux != NULL){
			cout << "Insira ID: "; 
			cin >> (*aux).id;
			cout << "Insira INFO: ";
			cin >> (*aux).info;
			cout << "Confirmar (S/n)";
			cin >> conf;
			conf = toupper(conf);
			if(conf == 'S'){
				(*aux).prox = NULL;
				il=aux;
				fl = aux;
				sinal = true;
			}else{
				cout << "Dados não confirmados...";
				delete (aux);
			}
		}else{
			cout << "Lista cheia...";
		}
	}else{
		cout << "Lista já possui nós...";
	}
}
void InsInicio(){
	sinal = false;
	if(il!=NULL){
		aux=new(NOLLL);
		if(aux!=NULL){
			cout << "Insira ID: "; 
			cin >> (*aux).id;
			cout << "Insira INFO: ";
			cin >> (*aux).info;
			cout << "Confirmar (S/n)";
			cin >> conf;
			conf = toupper(conf);
			if(conf == 'S'){
				(*aux).prox = il;
				il = aux;
				sinal = true;
			}else{
				cout << "Dados não confirmados...";
				delete(aux);
			}
		}else{
			cout << "Memória insuficiente";
		}
	}else{
		InsPrimNo();
	}
}
void InsFim(){
	sinal = false;
	if(fl!=NULL){
		aux =new(NOLLL);
		if(aux!=NULL){
			cout << "Insira ID: "; 
			cin >> (*aux).id;
			cout << "Insira INFO: ";
			cin >> (*aux).info;
			cout << "Confirmar (S/n)";
			cin >> conf;
			conf = toupper(conf);
			if(conf=='S'){
				(*aux).prox = NULL;
				(*fl).prox = aux;
				fl = aux;
			}else{
				cout << "Dados não confirmados...";
				delete(aux);
			}
		}else{
			cout << "Memória insuficiente";
		}
	}else{
		InsPrimNo();
	}
}
void ImprimeLista(){
	int cont;
	cont = 0;
	while (aux!=NULL){
		cout << "Endereço: " << aux << endl << "ID: " << (*aux).id << endl << "Info: " << (*aux).info << endl << "Prox: " << (*aux).prox << endl << endl;
		aux = (*aux).prox;
		cont++;
	}
	cout << "Total de objetos: " << cont;
}

int main(){
	il = NULL;
	fl = NULL;
	InsPrimNo();
	InsInicio();
	InsFim();
	ImprimeLista();
}



