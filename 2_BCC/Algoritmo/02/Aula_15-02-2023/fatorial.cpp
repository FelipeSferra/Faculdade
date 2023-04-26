#include <iostream>

using namespace std;

int main(){
    double result;
    int n;

    cout << "Declare o valor de n: ";
    cin >> n;
    result = 1;

    for (int i = 2; i <= n; i++) {  
        result *= i;
    }
    cout << endl << result;
}