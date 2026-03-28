//Дано масив з 20 цілих чисел, визначити кількість парних та непарних елементів.
#include <iostream>
using namespace std;

int main() {
    int arr[20];

    cout << "Enter 20 integers:\n";
    for (int i = 0; i < 20; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int even = 0, odd = 0;

    for (int i = 0; i < 20; i++) {
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }

    cout << "\nEven count: " << even << endl;
    cout << "Odd count:  " << odd << endl;
}