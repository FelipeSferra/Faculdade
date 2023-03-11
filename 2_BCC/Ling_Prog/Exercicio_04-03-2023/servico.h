class Servico{
    private:
        int id;
        int profissional;
        int tarefa;
        float horasTrab;
        float vlrHora;
        char status;
    public:
        Servico();
        Servico(int,int,int,float,float,char);

        int getId(){return this->id;}
        int getProf(){return this->profissional;}
        int getTrf(){return this->tarefa;}
        float getHrsTrab(){return this->horasTrab;}
        float getVlrHr(){return this->vlrHora;}
        char getStatus(){return this->status;}

        void setId(int id){(id >= 0) ? this->id = id : this->id=0;}
        void setProf(int profissional){(profissional >= 0) ? this->profissional = profissional : this->profissional = 0;}
        void setTrf(int tarefa){(tarefa >= 0) ? this->tarefa = tarefa : this->tarefa = 0;}
        void setHrsTrab(float horasTrab){this->horasTrab = horasTrab;}
        void setVlrHr(float vlrHora){this->vlrHora = vlrHora;}
        void setStatus(char status){this->status = status;}

        void ler();
        void imprimir();
};

Servico::Servico(){
    this->id = 0;
    this->profissional = 0;
    this->tarefa = 0;
    this->horasTrab = 0.00;
    this->vlrHora = 0.00;
    this->status = ' ';
}

Servico::Servico(int id, int profissional, int tarefa, float horasTrab, float vlrHora, char status){
    setId(id);
    setProf(profissional);
    setTrf(tarefa);
    setHrsTrab(horasTrab);
    setVlrHr(vlrHora);
    setStatus(status);
}

void Servico::imprimir(){
    cout << "\n\tImprimir Serviços\n";
    
    cout << fixed << setprecision(2) << endl;
    cout << "ID: " << getId() << endl;
    cout << "Profissional: " << getProf() << endl;
    cout << "Tarefa: " << getTrf() << endl;
    cout << "Horas Trabalhadas: " << getHrsTrab() << endl;
    cout << "Valor da Hora: " << getVlrHr() << endl;
    cout << "Status: " << getStatus() << endl;
}

void Servico::ler(){
    cout << "\n\Leitura de Serviços\n";

    cout << "Insira o ID: ";
    cin >> id;
    cout << "Insira o Profissional: ";
    cin >> profissional;
    cout << "Insira a Tarefa: ";
    cin >> tarefa;
    cout << "Insira as Horas Trabalhadas: ";
    cin >> horasTrab;
    cout << "Insira o Valor da Hora: ";
    cin >> vlrHora;
    cout << "Insira o Status: ";
    cin >> status;

    setId(id);
    setProf(profissional);
    setTrf(tarefa);
    setHrsTrab(horasTrab);
    setVlrHr(vlrHora);
    setStatus(status);
}