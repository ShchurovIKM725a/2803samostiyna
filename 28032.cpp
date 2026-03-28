//Дано масив з 15 цілих чисел, знайти мінімальний і максимальний елементи масиву та визначити їхні індекси.
#include <iostream>
using namespace std;

int main() {
    int arr[15];

    cout << "Enter 15 integers:\n";
    for (int i = 0; i < 15; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int minVal = arr[0], maxVal = arr[0];
    int minIdx = 0, maxIdx = 0;

    for (int i = 1; i < 15; i++) {
        if (arr[i] < minVal) { minVal = arr[i]; minIdx = i; }
        if (arr[i] > maxVal) { maxVal = arr[i]; maxIdx = i; }
    }

    cout << "\nMin = " << minVal << " at index " << minIdx << endl;
    cout << "Max = " << maxVal << " at index " << maxIdx << endl;
}