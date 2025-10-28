#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    unsigned int num2 = 10;
    float num3 = 9.9;
    double num4 = 15.0;
    char kirjain = 'A';
    bool totta = true;

    cout << "Int koko on: " << sizeof(num) << "\n";
    cout << "Unsigned koko on: " << sizeof(num2) << "\n";
    cout << "Float koko on: " << sizeof(num3) << "\n";
    cout << "Double koko on: " << sizeof(num4) << "\n";
    cout << "Char koko on: " << sizeof(kirjain) << "\n";
    cout << "Bool koko on: " << sizeof(totta) << "\n";
    return 0;
}