#include <iostream>
#include <string>
using namespace std;
template <typename T>

T maksimi(T a, T b) {
    return (a < b) ? b : a;
}

int main() {
    int a = 5, b = 10;
    cout << "Int: " << maksimi(a, b) << "\n";
    double x = 1.23, y = 3.21;
    cout << "Double: " << maksimi(x, y) << "\n";
    
	string s1 = "ABC";
    string s2 = "DEF";
    cout << "String: " << maksimi(s1, s2) << "\n";
    return 0;
}
