#include <iostream>
using namespace std;

int *varaa_taulukko(int n)
{
    return new int[n];
}

void lue_arvot(int *t, int n)
{
    cout << "Anna lukuja: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> t[i];
    }
}

void kaanna(int *t, int n)
{
    for (int i = 0; i < n / 2; ++i)
    {
        int temp = t[i];
        t[i] = t[n - i - 1];
        t[n - i - 1] = temp;
    }
}

void tulosta_arvot(const int *t, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << t[i] << ", ";
    }
}

int main()
{
    int n;
    cout << "Taulukon koko: ";
    cin >> n;

    int *taulu = varaa_taulukko(n);
    lue_arvot(taulu, n);
    kaanna(taulu, n);
    tulosta_arvot(taulu, n);

    delete[] taulu;
    return 0;
}