#include <iostream>
using namespace std;

class Henkilö {
public: string nimi;
    Henkilö(string nimi1 = "") : nimi(nimi1) {}
};

class Opiskelija : public Henkilö {
public:
    int opiskelijanumero;
    Opiskelija(string nimi1 = "", int numero = 0)
        : Henkilö(nimi1), opiskelijanumero(numero) {}
};

int main() {
    Opiskelija opiskelija("Nico", 123);
    cout << "Nimi on: " << opiskelija.nimi << "\n";
    cout << "Opiskelijanumero on: " << opiskelija.opiskelijanumero << "\n";
    return 0;
}
