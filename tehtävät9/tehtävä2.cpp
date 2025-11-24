#include <iostream>
using namespace std;

class Lasku {
public:
    virtual double laske(double x, double y) = 0;
    virtual ~Lasku() {}
};

class Yhteenlasku : public Lasku {
public:
    double laske(double x, double y) override {
        return x + y;
    }
};

class Kertolasku : public Lasku {
public:
    double laske(double x, double y) override {
        return x * y;
    }
};

int main() {
    Lasku* lasku = new Yhteenlasku();

    double tulos1 = lasku->laske(3, 4);
    cout << tulos1 << "\n";
    delete lasku;
    lasku = new Kertolasku();

    double tulos2 = lasku->laske(3, 4);
    cout << tulos2;
    delete lasku;
    return 0;
}
