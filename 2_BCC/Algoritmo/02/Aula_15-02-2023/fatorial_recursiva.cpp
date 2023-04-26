#include <iostream>
#include <windows.h>

using namespace std;

int fatorial(int n);

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);

    int x;

    cout << "Fatorial de: ";
    cin >> x;

    cout << "A fatorial de " << x << " é: " << fatorial(x) << endl;

    SetConsoleOutputCP(CPAGE_DEFAULT);
}

int fatorial(int n)
{

    if (n > 0)
    {
        n *= fatorial(n - 1);
        return n;
    }
    else
    {
        if (n == 0)
        {
            return 1;
        }
        else
        {
            cout << "\nNão existe fatorial de valor negativo!";
            return 0;
        }
    }
}