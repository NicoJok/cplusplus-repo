#include <iostream>
using namespace std;

void kertominen(int* pointer)
    {
        *pointer = *pointer * 2;
    }

int main() {
    int numero = 10;
    cout << numero << "\n";
    
    kertominen(&numero);
    cout << numero;
    
return 0;
}