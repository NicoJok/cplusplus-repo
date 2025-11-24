#include <iostream>
using namespace std;

class Eläin {
public:
    virtual void ääntele() = 0;
};

class Kissa : public Eläin {
public:
    void ääntele() override {
        cout << "Kissa: Maumau \n";
    }
};

class Koira : public Eläin {
public:
    void ääntele() override {
        cout << "Koira: Hauhau \n";
    }
};

int main() {
    Eläin* eläin1 = new Kissa();
    Eläin* eläin2 = new Koira();
    eläin1->ääntele();
    eläin2->ääntele();
    return 0;
}
