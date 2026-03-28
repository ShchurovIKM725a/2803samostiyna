//Дано квадратний двовимірний масив розміром 4 на 4, знайти суму елементів головної та побічної діагоналей.
#include <iostream>
using namespace std;

int main() {
    int arr[4][4];

    cout << "Enter 16 integers:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }

    int main_diag = 0, side_diag = 0;

    for (int i = 0; i < 4; i++) {
        main_diag += arr[i][i];
        side_diag += arr[i][3 - i];
    }

    cout << "\nMain diagonal sum: " << main_diag << endl;
    cout << "Side diagonal sum: " << side_diag << endl;
}