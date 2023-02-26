#include <iostream>

using namespace std;

class data{
    private: 
    int dia;
    int mes;
    int ano;

    public:
    data();
    data(int,int,int);

    int getDia() {return this->dia;}
    int getMes() {return this->mes;}
    int getAno() {return this->ano;}

    void setDia(int dia) {this->dia = dia;}
    void setMes(int mes) {this->mes = mes;}
    void setAno(int ano) {this->ano = ano; }

    void ler();
    void imprimir();
};

data::data(){
    this->dia = 1;
    this->mes = 1;
    this->ano = 2000;
}
data::data(int dia, int mes, int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}
void data::ler(){
    cout << "\tLer data\n\n";
    
    cout << "Digite o dia: ";
    cin >> dia;
    cout << "Digite o mes: ";
    cin >> mes;
    cout << "Digite o ano: ";
    cin >> ano;
}

void data::imprimir(){
    cout << "\n\tImprimir data\n\n";
    
    if (dia < 10 && mes < 10){
        cout << "0" << dia << "/" << "0" << mes << "/" << ano << endl;
    }else if(dia < 10){
        cout << "0" << dia << "/" << mes << "/" << ano << endl;
    }else if(mes < 10){
    	cout << dia << "/" << "0" << mes << "/" << ano << endl;
	}else{
		cout << dia << "/" << mes << "/" << ano <<endl;
	}
}
