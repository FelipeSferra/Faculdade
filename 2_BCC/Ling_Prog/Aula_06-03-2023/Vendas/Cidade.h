//Cidade.h
class Cidade: public Estado{
    private:
        int id;
        string nome;
        int qtdPes;
    public:
        Cidade(): Estado(), id(0), nome(""), qtdPes(0){}


};
