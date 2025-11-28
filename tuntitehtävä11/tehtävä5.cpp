#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, string> puhelinluettelo;

    puhelinluettelo["Testi1"] = "0401234567";
    puhelinluettelo["Testi2"] = "0412345678";
    puhelinluettelo["Testi3"] = "0441234567";

    string nimi;
    cout << "Nimi: ";
    cin >> nimi;
    cout << "Numero: " << puhelinluettelo[nimi] << "\n";
    return 0;
}
