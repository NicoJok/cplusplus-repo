#include <iostream>
using namespace std;

class Lamp {
private: bool _on;

public:
    Lamp() : _on(false) {
        cout << "Lamp created \n";
    }

    ~Lamp() {
        cout << "Lamp destroyed \n";
    }

    void turn_on() {
        _on = true;
        cout << "Lamp: ON \n";
    }

    void turn_off() {
        _on = false;
        cout << "Lamp: OFF \n";
    }
};

int main() {
    Lamp lamp;
    lamp.turn_on();
    lamp.turn_off();
    
    return 0;
}
