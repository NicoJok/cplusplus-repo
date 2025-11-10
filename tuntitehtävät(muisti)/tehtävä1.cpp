#include <iostream>
using namespace std;

bool tarina = true;

void muuta() {
    tarina = false;
}

void tulosta() {
    if (tarina == true)
        cout << "Tarina on totta";
    else
        cout << "Tarina on tarua";
}

int main() {
    muuta();
    tulosta();
    return 0;
}
