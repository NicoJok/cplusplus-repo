#include <iostream>
using namespace std;

int main() {
    string sukupuoli;
    double hemoglobiini;
    
    cout << "Sukupuolesi on (mies - nainen): ";
    cin >> sukupuoli;
    cout << "Hemoglobiiniarvosi on: ";
    cin >> hemoglobiini;
    
    if (sukupuoli == "mies") {
        if (hemoglobiini > 195) cout << "Arvosi on keskivertoa korkeampi";
        else if (hemoglobiini < 134) cout << "Arvosi on keskivertoa pienempi";
        else cout << "Arvosi on normaali tasossa";
    }
        
    if (sukupuoli == "nainen") {
        if (hemoglobiini > 175) cout << "Arvosi on keskivertoa korkeampi";
        else if (hemoglobiini < 117) cout << "Arvosi on keskivertoa pienempi";
        else cout << "Arvosi on normaali tasossa";
    }
        
    return 0;
        
    }
        