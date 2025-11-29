#include <iostream>
#include <string>
using namespace std;
template <typename T, int MAX = 100>

class Stack {
private:
    T arr[MAX];
    int topIndex;

public:
    Stack() : topIndex(0) {}
    void push(T value) {
        arr[topIndex++] = value;
    }
    T pop() {
            return arr[--topIndex];
    }
    int size() const {
        return topIndex;
    }
};

int main() {
    Stack<int> s1;
    s1.push(5);
    s1.push(10);
    cout << s1.pop() << "\n";
    cout << s1.pop() << "\n";

    Stack<string> s2;
    s2.push("ABC");;
    cout << s2.pop() << "\n";
    return 0;
}
//en tiedä oliko näin tarkoitus tehdä tehtävä