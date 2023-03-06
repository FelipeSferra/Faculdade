#include <iostream>

using namespace std;

bool is_string(string str);

class especialidade{
    private:
        int id;
        string descricao;
        int qtd;
    public:
        especialidade();
        especialidade(int,string,int);
        especialidade(int,string);

        int getId(){return this->id;}
        string getDesc(){return this->descricao;}
        int getQtd(){return this->qtd;}

        void setId(int);
        void setDesc(string);
        void setQtd(int);

        void ler();
        void imprimir();
};

especialidade::especialidade(){
    this->id = 0;
    this->descricao = "programador PHP";
    this->qtd = 1;
}

especialidade::especialidade(int id,string descricao,int qtd){
    setId(id);
    setDesc(descricao);
    setQtd(qtd);
}

void especialidade::setId(int id){
    if(id >= 0 && isdigit(qtd)){
        this->id = id;
    }else this->id = 0;
}

void especialidade::setDesc(string descricao){

    if(!(is_string(descricao))){
        this->descricao = descricao;
    }else{
        cout << "Informação inválida, setando valor padrão: " << this->descricao;
    }
}

void especialidade::setQtd(int qtd){
    if(qtd >= 0 && isdigit(qtd)){
        this->qtd = qtd;
    }else this->qtd = 1;
}

void especialidade::imprimir(){
    cout << "ID: " << getId() << endl;
    cout << "Descrição: " << getDesc() << endl;
    cout << "Quantidade: " << getQtd() << endl;
}

void especialidade::ler(){
    cout << "Digite o Id: ";
    cin >> this->id;

    cout << "Digite a descrição: ";
    cin.ignore();
    getline(cin,this->descricao);

    cout << "Digite a quantidade: ";
    cin >> this->qtd;

    especialidade(id,descricao,qtd);
}

//func para testar se é string ou não, vai ser usado na leitura da descrição
//um problema é se caso colocar um número antes da string
bool is_string(string str) {
    for (int i = 0; i < str.length(); i++){
        if (isdigit(str[i]) == false){
            return false;
        }
        return true;
    }
}
