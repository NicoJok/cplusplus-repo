#include <iostream>
// #include <algorithm>
using namespace std;

void kaanna(int *t, int n)
{
    for (int i = 0; i < n / 2; ++i) //
    {                               //
        int temp = t[i];            // mietin että voisiko tämän tehdä:
        t[i] = t[n - i - 1];        // reverse(t, t + n)
        t[n - i - 1] = temp;        // funktiolla, jos ottaa <algorithm> mukaan?
    }                               //
}

int main()
{
    int t[] = {1, 2, 3, 4, 5};
    int n = 5;

    kaanna(t, n);

    cout << "Käännettynä: ";
    for (int i = 0; i < n; ++i)
        cout << t[i] << ", ";

    return 0;
}
