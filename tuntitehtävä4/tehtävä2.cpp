#include <iostream>
using namespace std;

void lue_arvot(int *t, int n)
{
    cout << "Anna kolme lukua: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> t[i];
    }
}

int main()
{
    int n = 3;
    int *taulukko = new int[n];

    lue_arvot(taulukko, n);
    cout << "Valmis";

    return 0;
}