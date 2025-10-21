#include <iostream>
using namespace std;

int main() {
    int vuosi;
    cout << "Anna vuosi tarkistaaksesi onko se karkausvuosi: ";
    cin >> vuosi;
    
    if (vuosi % 4 == 0 && vuosi % 100 != 0 || vuosi % 400 == 0) cout << "Vuosi on karkausvuosi!"; 
    else cout << "Vuosi ei ole karkausvuosi.";
    
return 0;
}        
//piti katsoa tuo 100 != 0 netistä