#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;
void le(vector <int> &v, int n);
void imprime(vector <int> v);
int main(int argc, char *argv[])
{
    vector <int> a, b,c;

    cout << "Entre com os dados do primeiro vetor: " << endl;
    le(a,3);
    cout << endl << "Entre com os dados do segundo vetor: " << endl ;
    le(b,2);
    cout << endl << "Entre com os dados do terceiro vetor: " << endl;
    le(c,4);

    imprime(a);
    imprime(b);
    imprime(c);

    system("PAUSE");
    return EXIT_SUCCESS;
}
void le(vector <int> &v, int n)
{
    cout << "Lendo os elementos do vetor" << endl ;
    v.resize(n);
    for(int i=0; i<n; i++)
    {
        cout << "elemento[ " << i << " ]: " ;
        cin >> v[i];
    }
}
void imprime(vector <int> v)
{
    cout << endl << endl << "Imprimindo os elementos do vetor" << endl ;
    for(int i=0; i<v.size(); i++)
    {
        cout << "elemento[ " << i << " ]: " ;
        cout << v[i] << endl;
    }
}