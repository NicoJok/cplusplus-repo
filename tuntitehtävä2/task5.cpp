#include <iostream>
using namespace std;

int main() {
    int numero = 5;
    int* pointer1 = &numero;
    int** pointer2 = &pointer1;
    
    cout << numero << "\n";
    cout << pointer1 << "\n";
    cout << pointer2 << "\n";
    
    **pointer2 = 10;
    
    cout << numero << "\n";
    cout << pointer1 << "\n";
    cout << pointer2 << "\n";
return 0;
}