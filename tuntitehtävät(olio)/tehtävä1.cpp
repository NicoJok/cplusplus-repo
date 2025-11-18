#include <iostream>
#include <string>
using namespace std;

class Car {
private: string _brand; int _year;

public:
    void set_brand(string brand) {
        _brand = brand;
    }

    void set_year(int year) {
        _year = year;
    }

    void info() {
        cout << "Car: " << _brand << " (" << _year << ")";
    }
};

int main() {
    Car car;
    car.set_brand("BMW");
    car.set_year(2025);
    car.info();

    return 0;
}