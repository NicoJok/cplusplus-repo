#include <iostream>
using namespace std;
template <typename T>
void bubbleSort(T* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    float floatArr[] = {3.2f, 1.5f, 4.8f, 2.1f};
    int intArr[] = {5, 2, 9, 1, 7};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    bubbleSort(floatArr, floatSize);
    cout << "Float: ";
    for (int i = 0; i < floatSize; ++i) {
        cout << floatArr[i] << ", ";
    }
    bubbleSort(intArr, intSize);
    cout << "Int: ";
    for (int i = 0; i < intSize; ++i) {
        cout << intArr[i] << ", ";
    }
    return 0;
}