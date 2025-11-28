#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> jonotus;
    string nimi;

    cout << "Anna nimiä:" << "\n";
    while (getline(cin, nimi)) {
        if (nimi == "") break;
        jonotus.push_back(nimi);
    }

    while (!jonotus.empty()) {
        cout << "Jono: " << jonotus.front() << "\n";
        jonotus.pop_front();
    }
    return 0;
}
