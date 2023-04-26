//Vara.h

#ifndef ADVOGADO_H
    #include "Advogado.h"
#endif
#ifndef PROCESSO_H
    #include "Processo.h"
#endif
#ifndef VARA_H
    #define VARA_H
#endif

class Vara{
    protected:
        int id;
        Processo processo;
        Advogado advogado;
        string juiz;
        float valorCausa;
    public:
        Vara(): id(0), processo(Processo()), advogado(Advogado()), juiz(""), valorCausa(0.0){}
        Vara(int, Processo, Advogado, string, float);

        int getId(){return this->id;}
        Processo getProc(){return this->processo;}
        Advogado getAdv(){return this->advogado;}
        string getJuiz(){return this->juiz;}
        float getValor(){return this->valorCausa;}
        
        void setId(int id){(id >= 0) ? this->id = id : this->id = 9999;} 
        void setProc(Processo processo){this->processo = processo;}
        void setAdv(Advogado advogado){this->advogado = advogado;}
        void setJuiz(string juiz){this->juiz = juiz;}
        void setValor(float valorCausa){this->valorCausa = valorCausa;} 
      
        void AumentoVal(float);
        void AumentoVal(int);
};

Vara::Vara(int id, Processo processo, Advogado advogado, string juiz, float valorCausa): processo(processo),advogado(advogado){
    setId(id);
    setJuiz(juiz);
    setValor(valorCausa);
}

void Vara::AumentoVal(float valorAumento){
    float valorCausa = getValor();

    valorCausa = valorAumento + valorCausa;

    setValor(valorCausa);
}

void Vara::AumentoVal(int percent){
    float valorCausa = getValor();

    percent = percent/100;

    valorCausa = valorCausa + (valorCausa * percent);

    setValor(valorCausa);
}