//functions.h
#ifndef Functions_H
    #define Functions_H
#endif

#ifndef Vetores_H
    #include "vetores.h"
#endif

void lerVet(Vetores &vetor){
    system("cls");
    cout << "\n\tLeitura do vetor\n\n";
    
    float x,y,z;

    cout << "Insira o valor de X: ";
    cin >> x;
    cout << "Insira o valor de Y: ";
    cin >> y;
    cout << "Insira o valor de Z: ";
    cin >> z;

    vetor.setX(x);
    vetor.setY(y);
    vetor.setZ(z);
}


void imprimirOp(int tipo, Vetores result){
    system("cls");
    cout << "\n\tResultado da operação escolhida\n\n";

    /*
    if(tipo == 1){
        cout << "Soma = [" << result.getX() << ", " << result.getY() << ", " << result.getZ() << "]" << endl;
    }
    */
    switch(tipo){
        case 1: cout << "\n\nSoma = [" << result.getX() << ", " << result.getY() << ", " << result.getZ() << "]" << endl;break;
        case 2: ;
        case 3: ;
        case 4: ;
        case 5: ;

        default: break;
    }
    system("pause");
    return;
}

void imprimirVet(Vetores &vet1,Vetores &vet2, Vetores &vet3){
    system("cls");
    cout << "\n\tImpressão dos vetores\n\n";

    cout << "A = [" << vet1.getX() << ", " << vet1.getY() << ", " << vet1.getZ() << "]" << endl;
    cout << "B = [" << vet2.getX() << ", " << vet2.getY() << ", " << vet2.getZ() << "]" << endl;
    cout << "C = [" << vet3.getX() << ", " << vet3.getY() << ", " << vet3.getZ() << "]" << endl;

    system("pause");
    return;
}

Vetores Soma(Vetores &vet1, Vetores &vet2){
    Vetores soma;

    soma.setX(vet1.getX() + vet2.getX()); 
    soma.setY(vet1.getY() + vet2.getY());
    soma.setZ(vet1.getZ() + vet2.getZ());

    return soma;
}