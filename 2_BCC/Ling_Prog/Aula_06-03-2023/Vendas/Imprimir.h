
void imprimirEstado(Estado estado){
    cout << "\n\tImprimir Estado\n";

    cout << "Id: " << estado.getId() << endl;
    cout << "Estado: " << estado.getNome() << endl;
    cout << "UF: " << estado.getSigla() << endl;
}

void lerEstado(Estado &estado){
    cout << "\n\tInformar dados de Estado\n";

    int id;
    string nome,sigla;

    cout << "Id: ";
    cin >> id;
    cout << "Estado: ";
    cin.ignore();
    getline(cin,nome);
    cout << "UF: ";
    cin >> sigla;

    estado.setId(id);
    estado.setNome(nome);
    estado.setSigla(sigla);
}
