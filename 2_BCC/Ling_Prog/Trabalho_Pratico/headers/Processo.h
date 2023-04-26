//Processo.h

#ifndef PROCESSO_H
    #define PROCESSO_H
#endif

class Processo{
    protected:
        int id;
        string desc;
        string dataEntrada;
        string horaEntrada;
    public:
        Processo(): id(0), desc(""), dataEntrada(""), horaEntrada(""){}
        Processo(int, string, string, string);

        int getId(){return this->id;}
        string getDesc(){return this->desc;}
        string getData(){return this->dataEntrada;}
        string getHora(){return this->horaEntrada;}

        void setId(int id){(id >= 0) ? this->id = id : this->id = 9999;}
        void setDesc(string desc){this->desc = desc;}
        void setData(string dataEntrada){this->dataEntrada = dataEntrada;}
        void setHora(string horaEntrada){this->horaEntrada = horaEntrada;}
};

Processo::Processo(int id, string desc, string dataEntrada, string horaEntrada){
    setId(id);
    setDesc(desc);
    setData(dataEntrada);
    setHora(horaEntrada);
}