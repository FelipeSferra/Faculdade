#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

// Funções: Protótipos;
float lerTemp(int);

float CpK(float);
float CpF(float);
float KpC(float);
float KpF(float);
float FpC(float);
float FpK(float);

void CpKView();
void CpFView();
void KpCView();
void KpFView();
void FpCView();
void FpKView();

int main()
{
    int op = 999;

    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();

    SetConsoleOutputCP(CPAGE_UTF8);

    cout << fixed << setprecision(2);

    while (op != 0)
    {
        system("cls");
        cout << "\t\t<|== Implementação - Conversão de Temperatura ==|>\n\n";

        cout << "[01] Celsius para Fahrenheit\n";
        cout << "[02] Celsius para Kelvin\n";
        cout << "[03] Fahrenheit para Celsius\n";
        cout << "[04] Fahrenheit para Kelvin\n";
        cout << "[05] Kelvin para Celsius\n";
        cout << "[06] Kelvin para Fahrenheit\n";
        cout << "[00] Sair\n";

        cout << "\nSelecione a opção: " << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            CpFView();
            break;
        case 2:
            CpKView();
            break;
        case 3:
            FpCView();
            break;
        case 4:
            FpKView();
            break;
        case 5:
            KpCView();
            break;
        case 6:
            KpFView();
            break;

        default:
            break;
        }
    }

    SetConsoleOutputCP(CPAGE_DEFAULT);
}

float lerTemp(int tipo)
{
    float temp;
    if (tipo != 0)
    {
        switch (tipo)
        {
        case 1:
            cout << "Insira a temperatura em Celsius: ";
            cin >> temp;

            return temp;
        case 2:
            cout << "Insira a temperatura em Fahrenheit: ";
            cin >> temp;

            return temp;
        case 3:
            cout << "Insira a temperatura em Kelvin: ";
            cin >> temp;

            return temp;
        }
    }
    return 0;
}

void CpKView()
{
    system("cls");

    cout << "\t\t<|== Conversão de Celsius para Kelvin ==|>\n\n";

    float temp = lerTemp(1);
    char op = 'X';

    cout << "Conversão de " << temp << " °C: " << CpK(temp) << " K " << endl;

    cout << "\nDeseja converter outra temperatura? (S/N) ";
    cin >> op;

    op = toupper(op);

    switch (op)
    {
    case 'S':
        CpKView();
        break;
    default:
        cout << "\n\n";
        system("pause");
        break;
    }
}

void CpFView()
{
    system("cls");

    cout << "\t\t<|== Conversão de Celsius para Fahrenheit ==|>\n\n";

    float temp = lerTemp(1);
    char op = 'X';

    cout << "Conversão de " << temp << " °C: " << CpF(temp) << " °F " << endl;

    cout << "\nDeseja converter outra temperatura? (S/N) ";
    cin >> op;

    op = toupper(op);

    switch (op)
    {
    case 'S':
        CpFView();
        break;
    default:
        cout << "\n\n";
        system("pause");
        break;
    }
}

void KpCView()
{
    system("cls");

    cout << "\t\t<|== Conversão de Kelvin para Celsius ==|>\n\n";

    float temp = lerTemp(3);
    char op = 'X';

    cout << "Conversão de " << temp << " K: " << KpC(temp) << " °C " << endl;

    cout << "\nDeseja converter outra temperatura? (S/N) ";
    cin >> op;

    op = toupper(op);

    switch (op)
    {
    case 'S':
        KpCView();
        break;
    default:
        cout << "\n\n";
        system("pause");
        break;
    }
}

void KpFView()
{
    system("cls");

    cout << "\t\t<|== Conversão de Kelvin para Fahrenheit ==|>\n\n";

    float temp = lerTemp(3);
    char op = 'X';

    cout << "Conversão de " << temp << " K: " << KpF(temp) << " °F " << endl;

    cout << "\nDeseja converter outra temperatura? (S/N) ";
    cin >> op;

    op = toupper(op);

    switch (op)
    {
    case 'S':
        KpFView();
        break;
    default:
        cout << "\n\n";
        system("pause");
        break;
    }
}

void FpCView()
{
    system("cls");

    cout << "\t\t<|== Conversão de Fahrenheit para Celsius ==|>\n\n";

    float temp = lerTemp(2);
    char op = 'X';

    cout << "Conversão de " << temp << " °F: " << FpC(temp) << " °C " << endl;

    cout << "\nDeseja converter outra temperatura? (S/N) ";
    cin >> op;

    op = toupper(op);

    switch (op)
    {
    case 'S':
        FpCView();
        break;
    default:
        cout << "\n\n";
        system("pause");
        break;
    }
}

void FpKView()
{
    system("cls");

    cout << "\t\t<|== Conversão de Fahrenheit para Kelvin ==|>\n\n";

    float temp = lerTemp(2);
    char op = 'X';

    cout << "Conversão de " << temp << " °F: " << FpK(temp) << " K " << endl;

    cout << "\nDeseja converter outra temperatura? (S/N) ";
    cin >> op;

    op = toupper(op);

    switch (op)
    {
    case 'S':
        FpKView();
        break;
    default:
        cout << "\n\n";
        system("pause");
        break;
    }
}

float CpK(float tempC)
{
    float tempK = tempC + 273.15;
    return tempK;
}

float CpF(float tempC)
{
    float tempF = (tempC * 1.8) + 32;
    return tempF;
}

float KpC(float tempK)
{
    float tempC = tempK - 273.15;
    return tempC;
}

float KpF(float tempK)
{
    float tempF = ((tempK - 273.15) * 1.8) + 32;
    return tempF;
}

float FpC(float tempF)
{
    float tempC = ((tempF - 32) / 1.8);
    return tempC;
}

float FpK(float tempF)
{
    float tempK = ((tempF - 32) * 5 / 9) + 273.15;
    return tempK;
}
