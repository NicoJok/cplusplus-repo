#include <iostream>
using namespace std;

int *varaa_taulukko(int n)
{
    int *taulukko = new int[n];
    return taulukko;
}

int main()
{
    int n;
    cout << "Taulukon koko: ";
    cin >> n;

    int *a = varaa_taulukko(n);
    if (a != 0)
    {
        cout << "Lisätty";
    }

    return 0;
}