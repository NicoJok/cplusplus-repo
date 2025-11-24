#include <iostream>
using namespace std;

class Eläin {
public:
    virtual void ääntele() = 0;
};

class Kissa : public Eläin {
public:
    void ääntele() override {
        cout << "Miau \n";
    }
};

class Koira : public Eläin {
public:
    void ääntele() override {
        cout << "Hauhau \n";
    }
};

int main() {
    Kissa kissa;
    Koira koira;
    return 0;
}
