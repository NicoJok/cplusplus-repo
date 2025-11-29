#include <iostream>
using namespace std;

class Hevonen {
public:
    int kavionKoko;
    Hevonen(int koko) : kavionKoko(koko) {}
    bool operator<(const Hevonen& other) const {
        return kavionKoko < other.kavionKoko;
    }
};

template <typename T>
void bubbleSort(T* arr, int size) {
    for (int i = 0; i < size - 1; ++i)
        for (int j = 0; j < size - i - 1; ++j)
            if (arr[j + 1] < arr[j]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {
    Hevonen hevoset[] = {Hevonen(15), Hevonen(10), Hevonen(20), Hevonen(12)};
    int size = sizeof(hevoset) / sizeof(hevoset[0]);
    bubbleSort(hevoset, size);
    for (int i = 0; i < size; ++i)
        cout << hevoset[i].kavionKoko << ", ";
    return 0;
}