class TipoTarefa{
    private:
        int id;
        string descricao;
    public: 
        TipoTarefa();
        TipoTarefa(int,string);

        int getId(){return this->id;}
        string getDesc(){return this->descricao;}

        void setId(int id){(id >= 0) ? this->id = id : this->id = 0;}
        void setDesc(string descricao){this->descricao = descricao;}

        void imprimir();
        void ler();
};

TipoTarefa::TipoTarefa(){
    this->id = 0;
    this->descricao = "";
}

TipoTarefa::TipoTarefa(int id, string descricao){
    setId(id);
    setDesc(descricao);
}

void TipoTarefa::imprimir(){
    cout << "\n\tImprimir o Tipo de Tarefa\n";

    cout << "ID: " << getId() << endl;
    cout << "Descrição: " << getDesc() << endl;
}

void TipoTarefa::ler(){
    cout << "\n\tLeitura do Tipo de Tafera\n";

    cout << "Insira o ID: ";
    cin >> id;
    cout << "Insira a Descrição: ";
    cin.ignore();
    getline(cin,descricao);

    setId(id);
    setDesc(descricao);
}