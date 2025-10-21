#include <iostream>
using namespace std;

int main() {
    double gallonat;

    cout << "Anna gallonat: ";
    cin >> gallonat;

    while (gallonat >= 0) {
        cout << gallonat << " gallonaa on: " << gallonat * 3.785 << " litraa";
        cout << "Anna gallonat: ";
        cin >> gallonat;
    }

    cout << "Negatiivinen, lopetetaan." << endl;
    return 0;
}