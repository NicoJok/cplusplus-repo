#include <iostream>
using namespace std;

class Point {
private:
    int _x;
    int _y;

public:
    Point(int x, int y) : _x(x), _y(y) {
    }

    void print() {
        cout << _x << ", " << _y;
    }
};

int main() {
    Point point(1, 5);
    point.print();

    return 0;
}