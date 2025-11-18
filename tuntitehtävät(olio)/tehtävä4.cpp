#include <iostream>
using namespace std;

class Box {
private: int _size;

public:
    Box() : _size(0) {}

    void set_size(int size) {
        _size = size;
    }

    void show_size() {
        cout << _size;
    }
};

int main() {
    Box* box = new Box();
    box->set_size(50);
    box->show_size();
    delete box;

    return 0;
}