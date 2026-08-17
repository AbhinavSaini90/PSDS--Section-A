#include <iostream>
using namespace std;
int main() {
    int arr[10] = {1, 2, 3};
    int n = 3;
    arr[n] = 4;
    n++;
    cout << "After Push: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    n--;
    cout << "After Pop: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    int arr2[10] = {10, 20, 30, 40, 50};
    int size = 5;
    while (size > 0) {
        cout << "Popping this item: " << arr2[size - 1] << endl;
        size--;
        cout << "Array after pop: ";
        for (int i = 0; i < size; i++)
            cout << arr2[i] << " ";
        cout << endl;
    }
    return 0;
}