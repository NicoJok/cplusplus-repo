#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    vector<int> arvosanat;
    arvosanat.push_back(5);
    arvosanat.push_back(2);
    arvosanat.push_back(3);
    arvosanat.push_back(1);
    arvosanat.push_back(0);
    arvosanat.push_back(4);
    arvosanat.push_back(4);

    cout << "Arvosanat: ";
     for (auto x : arvosanat) {
        cout << x << ", ";
    }
    cout << "\n";

    int numero = 0;
    for (auto x : arvosanat) numero += x;
    double keskiarvo = (double)numero / arvosanat.size();
    cout << "Keskiarvo: " << keskiarvo << "\n";

    sort(arvosanat.begin(), arvosanat.end());
    cout << "Järjestettynä: ";
    for (auto x : arvosanat) cout << x << ", " << "\n";
    return 0;
}
