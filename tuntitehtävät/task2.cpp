#include <iostream>
int main()
{
    float sade, pinta_ala;
    std::cout << "Anna ympyrän säde: ";
    std::cin >> sade;
    pinta_ala = 3.14 * sade * sade;
    std::cout << "Pinta-ala on: " << pinta_ala;
}