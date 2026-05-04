#include <iostream>
#include <string>

using namespace std;

struct Student {
    int id;
    string name;
    float grade;
};

int main() {
    Student s[3];

    cout << "--- Student Management System ---" << endl;

    for (int i = 0; i < 3; i++) {
        cout << "Enter ID for student " << i + 1 << ": ";
        cin >> s[i].id;
        cout << "Enter Name for student " << i + 1 << ": ";
        cin >> s[i].name;
        cout << "Enter Grade for student " << i + 1 << ": ";
        cin >> s[i].grade;
        cout << "--------------------" << endl;
    }

    cout << endl << "Displaying Student Information:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "ID: " << s[i].id << " | Name: " << s[i].name << " | Grade: " << s[i].grade << endl;
    }

    return 0;
}
