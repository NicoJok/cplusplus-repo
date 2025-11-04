#include <iostream>
using namespace std;

void tulosta_arvot(const int *t, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << t[i] << ", ";
    }
}

int main()
{
    int luvut[] = {1, 2, 3};
    tulosta_arvot(luvut, 3);
    return 0;
}