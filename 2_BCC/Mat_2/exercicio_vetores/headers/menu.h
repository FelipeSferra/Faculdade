//menu.h
#ifndef Menu_H
    #define Menu_H
#endif

#ifndef Functions_H
    #include "functions.h"
#endif

void separacao();
void menuSoma(Vetores &, Vetores &, Vetores &);
void menuSub();
void menuMulti();
void menuMod();
void menuProd();
void menuAlt(Vetores &, Vetores &, Vetores &);

void mainMenu(Vetores &vet1, Vetores &vet2, Vetores &vet3){
    char op = 'X';

    while (op != '0'){
        system("cls");
        cout << "\n\tPrograma de operação entre vetores\n\n";
        separacao();
        cout << "\n\n[01] Operação: Soma\n";
        cout << "[02] Operação: Subtração\n";
        cout << "[03] Operação: Multiplicação\n";
        cout << "[04] Operação: Módulo\n";
        cout << "[05] Operação: Produto Escalar\n";
        cout << "[06] Alterar o valor dos vetores\n";
        cout << "[00] Fechar o Programa\n";

        cout << "Insira a operação desejada: ";
        cin >> op;

        switch (op){
            case '1': menuSoma(vet1,vet2,vet3);break;
            case '2': menuSub();break;
            case '3': menuMulti();break;
            case '4': menuMod();break;
            case '5': menuProd();break;
            case '6': menuAlt(vet1,vet2,vet3);break;
            
            default: system("cls");cout << "\n\n\n\t\tMuito obrigado por usar o programa!\n\n\n";break;
        }
        
    }
    
}

void menuSoma(Vetores &vet1, Vetores &vet2, Vetores &vet3){
    char op = 'X';
    int tipo = 1;

    while(op!='0'){
        system("cls");
        cout << "\n\tMenu - Opções de Soma\n\n";
        separacao();
        cout << "\n\n[01] Resultado da soma entre o vetor A e vetor B\n";
        cout << "[02] Resultado da soma entre o vetor B e vetor C\n";
        cout << "[03] Resultado da soma entre o vetor A e vetor C\n";
        cout << "[00] Voltar para o menu principal\n";

        cout << "Insira a operação desejada: ";
        cin >> op;
        
        switch (op){
            case '1': imprimirOp(tipo,Soma(vet1,vet2));break;
            case '2': imprimirOp(tipo,Soma(vet2,vet3));break;
            case '3': imprimirOp(tipo,Soma(vet1,vet3));break;
            default: break;
        }
    }

}

void menuSub(){

}

void menuMulti(){

}

void menuMod(){

}

void menuProd(){

}

void menuAlt(Vetores &vet1, Vetores &vet2, Vetores &vet3){
    char op = 'X';
    int tipo = 0;
    while(op != '0'){
        system("cls");
        cout << "\n\tMenu - Alteração de valores\n\n";
        separacao();
        cout << "\n\n[01] Alterar os valores do vetor A\n";
        cout << "[02] Alterar os valores do vetor B\n";
        cout << "[03] Alterar os valores do vetor C\n";
        cout << "[04] Imprimir todos os vetores\n";
        cout << "[00] Voltar para o menu principal\n";

        cout << "Insira a opção desejada: ";
        cin >> op;

        switch(op){
            case '1': lerVet(vet1);break;
            case '2': lerVet(vet2);break;
            case '3': lerVet(vet3);break;
            case '4': imprimirVet(vet1,vet2,vet3);break;

            default: break;
        }
    }
}

void separacao(){
    for (int i = 0; i < 50; i++){
        cout << "-";
    }
}