#include <iostream>
using namespace std;

int main() {
    int numero = 5;
    int* pointer = &numero;

    cout << numero << "\n";
    cout << *pointer << "\n";
return 0;
}