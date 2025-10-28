#include <iostream>
using namespace std;

int main()
{
    int numero = 10;
    int* pointer = &numero;

    cout << "Osoitteet: " << &numero << " on numeron osoite, ja " << &pointer << " on pointerin osoite" "\n";
    cout << "Arvot: " << numero << " on numeron arvo, ja " << *pointer << " on pointerin arvo" "\n";
    return 0;
}

/*
    En ollut tunnilla, joten en tiennyt pitääkö kaavio piirtää paintillä vai koodissa, joten teen sen tässä
    
    ____________________     _________________      ___________________________     ________________
    |  numero = 10      |   | pointer osoite  |    |    pointer osoite         |    | pointer arvo  |
    | osoite = 0x5052e8 |   |  = 0x5052e4     |--> |    = 0x5052e8             |--> |     = 10      |
    |___________________|   |_________________|    | (ottaa 'numero' osoitteen |    |_______________|
                                                   |____kautta numeron 10______|
*/