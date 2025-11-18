#include <iostream>
#include <string>
using namespace std;

class Auto
{
private:
    string rekisteritunnus;
    int huippunopeus;
    int nopeus;
    double matka;

public:
    Auto(string rekkari, int huippu) : rekisteritunnus(rekkari), huippunopeus(huippu), nopeus(0), matka(0) {}

    void kiihdy(int muutos)
    {
        nopeus += muutos;

        if (nopeus > huippunopeus)
        {
            nopeus = huippunopeus;
        }
        if (nopeus < 0)
        {
            nopeus = 0;
        }
    }

    void tiedot()
    {
        cout << "Rekkari: " << rekisteritunnus << "\n";
        cout << "Huippunopeus: " << huippunopeus << " km/h" << "\n";
        cout << "Nopeus: " << nopeus << " km/h" << "\n";
        cout << "Kuljettu matka: " << matka << " km" << "\n";
    }
};

int main()
{
    Auto auto1("ABC-123", 142);
    auto1.kiihdy(30);
    auto1.kiihdy(70);
    auto1.kiihdy(50);

    cout << "Nopeus:" << "\n";
    auto1.tiedot();
    cout << "\n" << "Jarrutus" << "\n";
    auto1.kiihdy(-200);
    cout << "\n" << "Nopeus:" << "\n";
    auto1.tiedot();

    return 0;
}