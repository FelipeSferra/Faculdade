#ifndef ADVOGADO_H
    #include "..\headers\Advogado.h"
#endif
#ifndef TIPOPROC_H
    #include "..\headers\TipoProcesso.h"
#endif
#ifndef PROCESSO_H
    #include "..\headers\Processo.h"
#endif
#ifndef VARA_H
    #include "..\headers\Vara.h"
#endif
#ifndef FUNC_H
    #define FUNC_H
#endif

void imprimirAdvogado(Advogado advogado){
    cout << "\n\tImprimir - Advogado\n\n";

    cout << "ID: " << advogado.getId() << endl;
    cout << "Nome: " << advogado.getNome() << endl;
    cout << "Cidade: " << advogado.getEstado() << endl;
    cout << "Estado: " << advogado.getEstado() << endl;
    cout << "Idade: " << advogado.getIdade() << endl;
}

void imprimirVara(Vara vara){
    cout << "\n\tImprimir - Vara\n\n";

    cout << "ID: " << vara.getId() << endl;
    cout << "Processo: " << "\n\t-ID: " << vara.getProc().getId()
                         << "\n\t-Descricao: " << vara.getProc().getDesc()  
                         << "\n\t-Data de Entrada: " << vara.getProc().getData()
                         << "\n\t-Hora de Entrada: " << vara.getProc().getHora() << endl;
    cout << "Advogado: " << "\n\t-ID: " << vara.getAdv().getId()
                         << "\n\t-Nome: " << vara.getAdv().getNome()
                         << "\n\t-Cidade: " << vara.getAdv().getCidade()
                         << "\n\t-Estado: " << vara.getAdv().getEstado()
                         << "\n\t-Idade: " << vara.getAdv().getIdade() << endl;
    cout << "Juiz: " << vara.getJuiz() << endl;
    cout << "Valor: " << vara.getValor() << endl;
}

void imprimirProc(Processo processo){
    cout << "\n\tImprimir - Processo\n\n";

    cout << "ID: " << processo.getId() << endl;
    cout << "Descricao: " << processo.getDesc() << endl;
    cout << "Data de Entrada: " << processo.getData() << endl;
    cout << "Hora de Entrada: " << processo.getHora() << endl;
}

void imprimirTipo(TipoProc tipo){
    cout << "\n\tImprimir - Tipo Processo\n\n";

    cout << "ID: " << tipo.getId() << endl;
    cout << "Descricao: " << tipo.getDesc() << endl;
}
