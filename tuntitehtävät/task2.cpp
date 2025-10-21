#include <iostream>
using namespace std;

int main() {
    float korkeus, kanta;
    cout << "Korkeus: ";
    cin >> korkeus;
    cout << "Kanta: ";
    cin >> kanta;
    double ala = (kanta * korkeus) / 2;
    double piiri = (korkeus + kanta) * 2;
    cout << "Suorakulmion pinta-ala on: " << ala << " ja piiri on " << piiri << endl;
    return 0;
}