//data.h
#include <iostream>
using namespace std;

class Data {
    private:
        int dia;
        int mes;
        int ano;
    public:
        //Data();  //construtor padrão
        Data():dia(1), mes(1), ano(1900){ } //construtor padrão inline

        Data(int, int, int); // construtor parametrizado
        //Data (int dia, int mes, int ano): dia(dia), mes(mes), ano(ano){}



        //geter´s
        //int getDia();
        int getDia() {return this->dia;}
        int getMes() {return this->mes;}
        int getAno() {return this->ano;}

        //void setAno(int);
        void setAno(int ano) {(ano>=1900&&ano<2100) ? this->ano=ano : this->ano=1900;}
        void setMes(int mes) {(mes>0 && mes<13) ? this->mes=mes : this->mes=1;}
        void setDia(int);


        void imprimir();
        void ler();
};

/*
Data::Data(){
    this->dia = 1;
    this->mes = 1;
    this->ano = 1900;
}*/


Data::Data(int dia, int mes, int ano){
    //this->dia = dia;
    //this->mes = mes;
    //this->ano = ano;

    setAno(ano);
    setMes(mes);
    setDia(dia);
}

void Data::imprimir(){
    cout << "\nData: " << dia << "-"
                       << mes << "-"
                       << ano << endl;
}

void Data::setDia(int dia){
    if (mes==2){
         if ( (ano%400==0) || ((ano%4==0) && (ano%100!=0))) { //ano bissexto
            if (dia>0 && dia<30)
               this->dia = dia;
            else this->dia = 1;
         }
         else{ //ano normal
            if (dia>0 && dia<29)
               this->dia = dia;
            else this->dia = 1;
         }
    }
    else {
          if (mes==4 || mes==6 || mes==9 || mes==11) { //30 dias
            if (dia>0 && dia<31)
                this->dia = dia;
            else this->dia = 1;
        }
        else{ //31 dias
            if (dia>0 && dia<32)
               this->dia = dia;
            else this->dia = 1;
        }
    }
}

/*
void Data::setAno(int ano){
  // if(ano>=1900 && ano<2100)
  //      this->ano = ano;
  //  else this->ano = 1900;

  (ano>=1900 && ano <2100) ? this->ano = ano : this->ano = 1900;
}
*/


/*
int Data::getDia(){
  return this->dia;
}*/

void Data::ler(){

}
