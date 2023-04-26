//Advogado.h
#ifndef ADVOGADO_H
    #define ADVOGADO_H
#endif

class Advogado{
    protected:
        int id;
        string nome;
        string cidade;
        string estado;
        int idade;
    public: 
        Advogado(): id(0), nome(""), cidade(""), estado(""), idade(1){}
        Advogado(int, string, string, string, int);

        int getId(){return this->id;}
        string getNome(){return this->nome;}
        string getCidade(){return this->cidade;}
        string getEstado(){return this->estado;}
        int getIdade(){return this->idade;}

        void setId(int id){(id >= 0) ? this->id = id : this->id = 9999;}
        void setNome(string nome){this->nome = nome;}
        void setCidade(string cidade){this->cidade = cidade;}
        void setEstado(string estado){this->estado = estado;}
        void setIdade(int idade){(idade >= 18) ? this->idade = idade : this->idade = 404;}
};

Advogado::Advogado(int id, string nome, string cidade, string estado, int idade){
    setId(id);
    setNome(nome);
    setCidade(cidade);
    setEstado(estado);
    setIdade(idade);
}