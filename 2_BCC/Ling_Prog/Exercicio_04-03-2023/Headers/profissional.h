class Profissional{
    private:
        int id;
        string nome;
        string nascimento;
        int especialidade;

    public:
        Profissional();
        Profissional(int,string,string,int);

        int getId(){return this->id;}
        string getNome(){return this->nome;}
        string getNasc(){return this->nascimento;}
        int getEspec(){return this->especialidade;}

        void setId(int id){(id >= 0) ? this->id = id : this->id = 0;}
        void setNome(string nome){this->nome = nome;}
        void setNasc(string nascimento){this->nascimento = nascimento;}
        void setEspec(int especialidade){(especialidade >= 0) ? this->especialidade = especialidade : this->especialidade = 0;}

        void ler();
        void imprimir();
};

Profissional::Profissional(){
    this->id = 0;
    this->nome = "";
    this->nascimento = "";
    this->especialidade = 0;
}

Profissional::Profissional(int id, string nome, string nascimento, int especialidade){
    setId(id);
    setNome(nome);
    setNasc(nascimento);
    setEspec(especialidade);
}

void Profissional::imprimir(){
    cout << "\n\tImprimir Profissional\n";

    cout << "ID: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Nascimento: " << getNasc() << endl;
    cout << "Especialidade: " << getEspec() << endl;
}

void Profissional::ler(){
    cout << "\n\tLeitura de Profissional\n";

    cout << "Insira o ID: ";
    cin >> id;
    cout << "Insira o Nome: ";
    cin.ignore();
    getline(cin,nome);
    cout << "Insira a Data de Nascimento: ";
    cin.ignore();
    getline(cin,nascimento);
    cout << "Insira a especialidade: ";
    cin >> especialidade;

    setId(id);
    setNome(nome);
    setNasc(nascimento);
    setEspec(especialidade);
}