#include <iostream>
using namespace std;

void nollaa(int* taulukko, int n) {
    for (int a = 0; a < n; a++)
    {
        taulukko[a] = 0;    
    }
}
int main() 
{
    int taulukko[4] = {1, 2, 3, 4};
    
    for (int a = 0; a < 4; a++) 
        cout << taulukko[a] << " ";
    cout << "\n" << "nollaus" << "\n";
        
    nollaa(taulukko, 4);
    
    for (int a = 0; a < 4; a++) 
        cout << taulukko[a] << " ";
    
    return 0;
}

// Lisäkysymykseen: Tarvitaan toinen parametri, jottei se 'lue'
//                  liian pitkälle ja tulisi overflow