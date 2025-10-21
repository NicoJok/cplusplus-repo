#include <iostream>
using namespace std;

int main() {
    int numero = 1;
    
    while (numero <= 1000) {
        if (numero % 3 == 0) {
            cout << numero << ", ";
        }
            numero++;
    }
return 0;
}        
