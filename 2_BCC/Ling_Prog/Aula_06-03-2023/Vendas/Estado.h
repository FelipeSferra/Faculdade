//Estado.h
class Estado{

    private: //é possivel usar o protected que funciona do mesmo jeito, porém fica visivel e utilizavel para classe Cidade
        int id;
        string nome;
        string sigla;
    public:
        Estado(): id(0),nome(""),sigla(""){}
        Estado(int id, string nome, string sigla): id(id), nome(nome), sigla(sigla){}

        //gets
        int getId(){return this->id;}
        string getNome(){return this->nome;}
        string getSigla(){return this->sigla;}

        //sets
        void setId(int id){(id>0) ? this->id = id : this->id= 9999;}
        void setNome(string nome){this->nome = nome;}
        void setSigla(string sigla){this->sigla=sigla;}

        void imprimir();
        void ler();
};


void Estado::imprimir(){ //método imprimir da classe estado - é membro da classe Estado
    cout << "\n\tImprimir Estado\n";

    cout << "Id: " << this->id << endl;
    cout << "Estado: " << this->nome << endl;
    cout << "UF: " << this->sigla << endl;

}

void Estado::ler(){

    cout << "\n\tInformar dados de Estado\n";

    int id;
    string nome,sigla;

    cout << "Id: ";
    cin >> id;
    cout << "Estado: ";
    cin.ignore();
    getline(cin,nome);
    cout << "UF: ";
    cin >> sigla;

    setId(id);
    setNome(nome);
    setSigla(sigla);
}
