#include <iostream>
using namespace std;

int main() {
    string name;
    int m1, m2, m3;
    
    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks of 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    int total = m1 + m2 + m3;
    float percentage = total / 3.0;

    cout << "\nStudent Name: " << name;
    cout << "\nTotal Marks: " << total;
    cout << "\nPercentage: " << percentage << "%";

    if (percentage >= 90)
        cout << "\nGrade: A";
    else if (percentage >= 75)
        cout << "\nGrade: B";
    else if (percentage >= 50)
        cout << "\nGrade: C";
    else
        cout << "\nGrade: Fail";

    return 0;
}
+
