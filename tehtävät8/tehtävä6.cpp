#include <iostream>
using namespace std;

class Eläin {
public:
    virtual void ääntele() = 0;
    virtual ~Eläin() {
        cout << "Eläin destruktori \n";
    }
};

class Kissa : public Eläin {
public:
    void ääntele() override {
        cout << "Kissa: Maumau \n";
    }
    ~Kissa() {
        cout << "Kissa destrktori \n";
    }
};
                                //Virtualin takia ensimmäiseksi tulee kissan,
                                //ja sitten eläimen destruktori.
class Koira : public Eläin {
public:
    void ääntele() override {
        cout << "Koira: Hauhau \n";
    }
    ~Koira() {
        cout << "Koira destruktori \n";
    }
};

int main() {
    Eläin* eläin = new Kissa();
    eläin->ääntele();
    delete eläin;
    return 0;
}
