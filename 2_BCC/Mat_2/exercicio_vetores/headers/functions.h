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

void imprimirSoma(Vetores result){
    system("cls");
    cout << "\n\tResultado da operação escolhida\n\n";

    cout << "\n\nSoma = [" << result.getX() << ", " << result.getY() << ", " << result.getZ() << "]" << "\n\n";

    system("pause");
    return;
}

void imprimirSub(Vetores result){
    system("cls");
    cout << "\n\tResultado da operação escolhida\n\n";

    cout << "\n\nSubtração = [" << result.getX() << ", " << result.getY() << ", " << result.getZ() << "]" << "\n\n";

    system("pause");
    return;
}

void imprimirMulti(Vetores result){
    system("cls");
    cout << "\n\tResultado da operação escolhida\n\n";

    cout << "\n\nMultiplicação = [" << result.getX() << ", " << result.getY() << ", " << result.getZ() << "]" << "\n\n";

    system("pause");
    return;
}

void imprimirMod(float result){
    system("cls");
    cout << "\n\tResultado da operação escolhida\n\n";

    cout << "\n\nMódulo = " << result << "\n\n";

    system("pause");
    return;
}

void imprimirProd(float result){
    system("cls");
    cout << "\n\tResultado da operação escolhida\n\n";

    cout << "\n\nProduto escalar = " << result << "\n\n";

    system("pause");
    return;
}

void imprimirAng(float result){
    system("cls");
    cout << "\n\tResultado da operação escolhida\n\n";

    cout << "\n\nÂngulo = " << result << "\n\n";

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

float lerK(){
    float K;
    system("cls");

    cout << "\n\tLeitura da variável K\n\n";

    cout << "Insira o valor de K: ";
    cin >> K;

    return K;
}

Vetores Soma(Vetores &vet1, Vetores &vet2){
    Vetores soma;

    soma.setX(vet1.getX() + vet2.getX()); 
    soma.setY(vet1.getY() + vet2.getY());
    soma.setZ(vet1.getZ() + vet2.getZ());

    return soma;
}

Vetores Sub(Vetores &vet1, Vetores &vet2){
    Vetores sub;

    sub.setX(vet1.getX() - vet2.getX());
    sub.setY(vet1.getY() - vet2.getY());
    sub.setZ(vet1.getZ() - vet2.getZ());

    return sub;
}

Vetores Multi(float K, Vetores &vet){
    Vetores multi;

    multi.setX(K*vet.getX());
    multi.setY(K*vet.getY());
    multi.setZ(K*vet.getZ());

    return multi;
}

float Mod(Vetores &vet){
    float mod;
    mod = sqrt(( pow(vet.getX(),2) + pow(vet.getY(),2) + pow(vet.getZ(),2)));

    return mod;
}

float Prod(Vetores &vet1, Vetores &vet2){
    float prod;

    prod = ( (vet1.getX() * vet2.getX()) + (vet1.getY() * vet2.getY()) + (vet1.getZ() * vet2.getZ()) );

    return prod;
}

float Ang(Vetores &vet1, Vetores &vet2){
    const float pi = 3.1415;
    float ang; 
    
    ang = acos((Prod(vet1,vet2)) / (Mod(vet1) * Mod(vet2)));

    ang = ((180 * ang) / pi);

    return ang;
}