//Дано масив з 10 елементів, змінити порядок елементів на зворотний без використання додаткового масиву.
#include <iostream>
using namespace std;

int main() {
    int arr[10];

    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        int tmp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = tmp;
    }

    cout << "\nReversed: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i];
        if (i < 9) cout << " ";
    }
    cout << endl;
}