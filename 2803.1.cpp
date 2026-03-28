//Створити масив з 10 цілих чисел, заповнити його з клавіатури, вивести всі елементи масиву та знайти суму всіх елементів.
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;

    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "\nArray: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i];
        if (i < 9) cout << " ";
    }

    cout << "\nSum = " << sum << endl;
}