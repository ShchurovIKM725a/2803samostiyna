//Створити двовимірний масив розміром 3 на 3, заповнити його з клавіатури та вивести у вигляді матриці.
#include <iostream>
using namespace std;

int main() {
    int arr[3][3];

    cout << "Enter 9 integers:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }

    cout << "\nMatrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}