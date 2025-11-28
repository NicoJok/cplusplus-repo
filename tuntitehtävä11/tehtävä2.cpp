#include <iostream>
#include <string>
using namespace std;
template <typename T>

class Pair {
private:
    T eka;
    T toka;

public:
    Pair(T a, T b) : eka(a), toka(b) {}
    T getMax() {
        return (eka < toka) ? toka : eka;
    }
    void print() {
        cout << eka << " ja " << toka << "\n";
    }
};

int main() {
    Pair<int> p1(5, 10);
    p1.print();
    cout << "Int: " << p1.getMax() << "\n";
    Pair<double> p2(1.23, 3.21);
    p2.print();
    cout << "Double: " << p2.getMax() << "\n";
    Pair<string> p3("ABC", "DEF");
    p3.print();
    cout << "String: " << p3.getMax() << "\n";
    return 0;
}
