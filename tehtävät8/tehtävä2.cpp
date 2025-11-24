#include <iostream>
using namespace std;

class Eläin {
public:
    Eläin() {
        cout << "Eläin: \n";
    }
};

class Kissa : public Eläin {
public:
    Kissa() {
        cout << "Kissa\n";
    }
};

class Koira : public Eläin {
public:
    Koira() {
        cout << "Koira\n";
    }
};

int main() {
    Kissa kissa;
    Koira koira;
    return 0;
}
