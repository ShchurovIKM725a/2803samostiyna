//Відсортувати масив студентів за зростанням середнього балу без використання стандартних бібліотек.
#include <iostream>
using namespace std;

struct Student {
    char name[50];
    double gpa;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student arr[100];

    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Name: "; cin >> arr[i].name;
        cout << "GPA: ";  cin >> arr[i].gpa;
    }

    // bubble sort by gpa
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j].gpa > arr[j + 1].gpa) {
                Student tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }

    cout << "\nSorted by GPA:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i].name << " - " << arr[i].gpa << endl;
}