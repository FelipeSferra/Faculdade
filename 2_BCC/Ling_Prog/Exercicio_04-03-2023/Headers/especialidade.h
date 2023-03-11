class Especialidade{
    private:
        int id;
        string descricao;
        int qtd;

    public:
        Especialidade();
        Especialidade(int,string,int);

        int getId(){return this->id;}
        string getDesc(){return this->descricao;}
        int getQtd(){return this->qtd;}

        void setId(int id){(id >= 0) ? this->id = id : this->id = 0;}
        void setDesc(string descricao){this->descricao = descricao;}
        void setQtd(int qtd){(qtd >= 0) ? this->qtd = qtd : this->qtd = 0;}

        void ler();
        void imprimir();
};

Especialidade::Especialidade(){
    this->id = 0;
    this->descricao = "";
    this->qtd = 0;
}

Especialidade::Especialidade(int id, string descricao, int qtd){
    setId(id);
    setDesc(descricao);
    setQtd(qtd);
}

void Especialidade::imprimir(){
    cout << "\n\tImprimir Especialidade\n";

    cout << "ID: " << getId() << endl;
    cout << "Descrição: " << getDesc() << endl;
    cout << "Quantidade: " << getQtd() << endl;
}

void Especialidade::ler(){
    cout << "\n\tLeitura de Especialidade\n";

    cout << "Insira o ID: ";
    cin >> id;
    cout << "Insira a Descrição: ";
    cin.ignore();
    getline(cin,descricao);
    cout << "Insira a quantidade: ";
    cin >> qtd;

    setId(id);
    setDesc(descricao);
    setQtd(qtd);
}