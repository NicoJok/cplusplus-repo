#include <iostream>
using namespace std;

int main() {
    int* pointer = nullptr;
    if (pointer == nullptr) {
        cout << "pointerissa on arvo null \n";
    }
    else {
        cout << *pointer << " väärin";
        }
        
    int numero = 10;
    pointer = &numero;
    
    if (pointer == nullptr) {
    cout << "pointerissa on arvo null \n";
    }
    else {
        cout << "\n" << *pointer << "\n" << "arvo on oikein";
        }
return 0;
}