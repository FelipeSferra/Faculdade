//TipoProcesso.h
#ifndef TIPOPROC_H
    #define TIPOPROC_H
#endif

class TipoProc{
    protected:
        int id;
        string desc;
    public:
        TipoProc(): id(0), desc(""){}
        TipoProc(int, string);

        int getId(){return this->id;}
        string getDesc(){return this->desc;}

        void setId(int id){(id >= 0) ? this->id = id : this->id = 9999;}
        void setDesc(string desc){this->desc = desc;}
};

TipoProc::TipoProc(int id, string desc){
    setId(id);
    setDesc(desc);
}