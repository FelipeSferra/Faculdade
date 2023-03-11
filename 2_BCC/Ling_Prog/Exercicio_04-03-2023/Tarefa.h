class Tarefa{
    private:
        int id;
        string descricao;
        int tipo;
        float vlrHora;
        int qtdeTrabalhada;
    public:
        Tarefa();
        Tarefa(int,string,int,float,int);
        
        int getId(){return this->id;}
        string getDesc(){return this->descricao;}
        int getTipo(){return this->tipo;}
        float getVlrHr(){return this->vlrHora;}
        int getQtdTrab(){return this->qtdeTrabalhada;}

        void setId(int id){(id >= 0) ? this->id = id : this->id = 0;}
        void setDesc(string descricao){this->descricao = descricao;}
        void setTipo(int tipo){(tipo >= 0) ? this->tipo = tipo : this->tipo = 0;}
        void setVlrHr(float vlrHora){this->vlrHora = vlrHora;}
        void setQtdTrab(float qtdeTrabalhada){this->qtdeTrabalhada = qtdeTrabalhada;}

        void imprimir();
        void ler();
};

Tarefa::Tarefa(){
    this->id = 0;
    this->descricao = "";
    this->tipo = 0;
    this->vlrHora = 0.00;
    this->qtdeTrabalhada = 0;
}

Tarefa::Tarefa(int id, string descricao, int tipo, float vlrHora, int qtdeTrabalhada){
    setId(id);
    setDesc(descricao);
    setTipo(tipo);
    setVlrHr(vlrHora);
    setQtdTrab(qtdeTrabalhada);
}

void Tarefa::imprimir(){
    cout << "\n\tImprimir Tarefa\n";

    cout << fixed << setprecision(2) << endl;
    cout << "ID: " << getId() << endl;
    cout << "Descrição: " << getDesc() << endl;
    cout << "Tipo: " << getTipo() << endl;
    cout << "Valor da Hora: " << getVlrHr() << endl;
    cout << "Qtde Trabalhada: " << getQtdTrab() << endl;
}

void Tarefa::ler(){
    cout << "\n\tLeitura de Tarefa\n";

    cout << "Insira o ID: ";
    cin >> id;
    cout << "Insira a Descrição: ";
    cin.ignore();
    getline(cin,descricao);
    cout << "Insira o Tipo: ";
    cin >> tipo;
    cout << "Insira o Valor da Hora: ";
    cin >> vlrHora;
    cout << "Insira a Qtde Trabalhada: ";
    cin >> qtdeTrabalhada;

    setId(id);
    setDesc(descrica);
    setTipo(tipo);
    setVlrHr(vlrHora);
    setQtdTrab(qtdeTrabalhada);
}