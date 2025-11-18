#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string _kirja;
    int _sivut;

public:
    Book(string kirja, int sivut) : _kirja(kirja), _sivut(sivut) {
        cout << "Kirja: " << _kirja << "\n";
    }

    Book(const Book& kirja2) : _kirja(kirja2._kirja), _sivut(kirja2._sivut) {
        cout << "Copy constructor called for " << _kirja << "\n";
    }

    void print() {
        cout << "Kirja: " << _kirja << ", sivuja: " << _sivut << "\n";
    }
};

int main() {
    Book kirja1("C++ Basics", 200);
    Book kirja2 = kirja1;
    
    kirja1.print();
    kirja2.print();

    return 0;
}