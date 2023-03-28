//menu.h
#ifndef Menu_H
    #define Menu_H
#endif

#ifndef Functions_H
    #include "functions.h"
#endif

void separacao();
void menuSoma(Vetores &, Vetores &, Vetores &);
void menuSub(Vetores &, Vetores &, Vetores &);
void menuMulti(Vetores &, Vetores &, Vetores &);
void menuMod(Vetores &, Vetores &, Vetores &);
void menuProd(Vetores &, Vetores &, Vetores &);
void menuAng(Vetores &, Vetores &, Vetores &);
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
        cout << "[06] Operação: Ângulo entre vetores\n";
        cout << "[07] Alterar o valor dos vetores\n";
        cout << "[00] Fechar o Programa\n";

        cout << "Insira a operação desejada: ";
        cin >> op;

        switch (op){
            case '1': menuSoma(vet1,vet2,vet3);break;
            case '2': menuSub(vet1,vet2,vet3);break;
            case '3': menuMulti(vet1,vet2,vet3);break;
            case '4': menuMod(vet1,vet2,vet3);break;
            case '5': menuProd(vet1,vet2,vet3);break;
            case '6': menuAng(vet1,vet2,vet3);break;
            case '7': menuAlt(vet1,vet2,vet3);break;
            
            default: system("cls");cout << "\n\n\n\t\tMuito obrigado por usar o programa!\n\n\n";break;
        }
        
    }
    
}

void menuSoma(Vetores &vet1, Vetores &vet2, Vetores &vet3){
    char op = 'X';

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
            case '1': imprimirSoma(Soma(vet1,vet2));break;
            case '2': imprimirSoma(Soma(vet2,vet3));break;
            case '3': imprimirSoma(Soma(vet1,vet3));break;

            default: break;
        }
    }

}

void menuSub(Vetores &vet1, Vetores &vet2, Vetores &vet3){
    char op = 'X';

    while(op!='0'){
        system("cls");
        cout << "\n\tMenu - Opções Subtração\n\n";
        separacao();
        cout << "\n\n[01] Resultado da subtração entre o vetor A e vetor B\n";
        cout << "[02] Resultado da subtração entre o vetor B e vetor C\n";
        cout << "[03] Resultado da subtração entre o vetor A e vetor C\n";
        cout << "[00] Voltar para o menu principal\n";

        cout << "Insira a operação desejada: ";
        cin >> op;

        switch (op){
        case '1': imprimirSub(Sub(vet1,vet2));break;
        case '2': imprimirSub(Sub(vet2,vet3));break;
        case '3': imprimirSub(Sub(vet1,vet3));break;
        
        default: break;
        }
    }
}

void menuMulti(Vetores &vet1, Vetores &vet2, Vetores &vet3){
    char op = 'X';
    
    float K = lerK();

    while(op!='0'){
        system("cls");
        cout << "\n\tMenu - Opções Multiplicação\n\n";
        separacao();
        cout << "\n\n[01] Resultado da multiplicação entre " << K << " e o vetor A\n";
        cout << "[02] Resultado da multiplicação entre " << K << " e o vetor B\n";
        cout << "[03] Resultado da multiplicação entre " << K << " e o vetor C\n";
        cout << "[04] Alterar o valor da variável K\n";
        cout << "[00] Voltar para o menu principal\n";

        cout << "Insira a operação desejada: ";
        cin >> op;

        switch(op){
            case '1': imprimirMulti(Multi(K, vet1));break;
            case '2': imprimirMulti(Multi(K, vet2));break;
            case '3': imprimirMulti(Multi(K, vet3));break;
            case '4': K = lerK();
            
            default: break;
        }
    }
}

void menuMod(Vetores &vet1, Vetores &vet2, Vetores &vet3){
    char op = 'X';
    
    while (op != '0'){
        system("cls");
        cout << "\n\tMenu - Opções Módulo\n\n";
        separacao();
        cout << "\n\n[01] Módulo do vetor A\n";
        cout << "[02] Módulo do vetor B\n";
        cout << "[03] Módulo do vetor C\n";
        cout << "[00] Voltar para o menu principal\n";

        cout << "Insira a operação desejada: ";
        cin >> op;

        switch (op){
            case '1': imprimirMod(Mod(vet1));break;
            case '2': imprimirMod(Mod(vet2));break;
            case '3': imprimirMod(Mod(vet3));break;     

            default: break;
        }

    }
}

void menuProd(Vetores &vet1, Vetores &vet2, Vetores &vet3){
    char op = 'X';
    
    while(op != '0'){
        system("cls");
        cout << "\n\tMenu - Opções Produto Escalar\n\n";
        separacao();
        cout << "\n\n[01] Produto escalar do vetor A e do vetor B\n";
        cout << "[02] Produto escalar do vetor B e do vetor C\n";
        cout << "[03] Produto escalar do vetor A e do vetor C\n";
        cout << "[00] Voltar para o menu principal\n";

        cout << "Insira a operação desejada: ";
        cin >> op;

        switch(op){
            case '1': imprimirProd(Prod(vet1,vet2));break;
            case '2': imprimirProd(Prod(vet2,vet3));break;
            case '3': imprimirProd(Prod(vet1,vet3));break;

            default: break;

        }
    }
}

void menuAng(Vetores &vet1, Vetores &vet2, Vetores &vet3){
    char op = 'X';
    
    while(op != '0'){
        system("cls");
        cout << "\n\tMenu - Opções Ângulo entre vetores\n\n";
        separacao();
        cout << "\n\n[01] Ângulo entre o vetor A e o vetor B\n";
        cout << "[02] Ângulo entre o vetor B e o vetor C\n";
        cout << "[03] Ângulo entre o vetor A e o vetor C\n";
        cout << "[00] Voltar para o menu principal\n";

        cout << "Insira a operação desejada: ";
        cin >> op;

        switch(op){
            case '1': imprimirAng(Ang(vet1,vet2));break;
            case '2': imprimirAng(Ang(vet2,vet3));break;
            case '3': imprimirAng(Ang(vet1,vet3));break;

            default: break;

        }
    }
}

void menuAlt(Vetores &vet1, Vetores &vet2, Vetores &vet3){
    char op = 'X';
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