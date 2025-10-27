#include <iostream>
using namespace std;

int main() {
    double numero = 10.5;
    double* pointer = &numero;

    cout << numero << "\n";
    cout << *pointer << "\n";
    
    *pointer = 10.0;
    
    cout << "\n" << numero << "\n";
    cout << *pointer << "\n";
return 0;
}