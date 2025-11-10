#include <iostream>
#include <string>
using namespace std;

string tarina = "totta";

void funktioC() {
    cout << "Tarina on " << tarina;
}

void funktioB() {
    funktioC();
}

void funktioA() {
    funktioB();
}

int main() {
    funktioA();
    return 0;
}

//funktioC -> funktioB -> funktioA -> main