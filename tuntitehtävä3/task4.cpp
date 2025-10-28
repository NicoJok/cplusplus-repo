#include <iostream>
using namespace std;

int summaa1(int* x, int* y)
{
    return *x + *y;             // kirjoitin 2 funktiota, en tiennyt oliko sallittua
}                               // koska ohjeessa puhuttiin vain yhdestä
int summaa2(int& a, int& b)
{
    return a + b;
}

int main()
{
    int nro1 = 10, nro2 = 20;
    cout << "Summaa pointerit: " << summaa1(&nro1, &nro2) << "\n";
    cout << "Summaa referenssit: " << summaa2(nro1, nro2) << "\n";
    return 0;
}