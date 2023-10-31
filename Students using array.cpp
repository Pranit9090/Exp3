#include <iostream>
using namespace std;
int main() {
    int numStudents;
    int passCount = 0;
    int failCount = 0;

   cout << "Enter the number of students: \n";
   cin >> numStudents;

    int studentIDs[numStudents];
    int studentStatus[numStudents];

    for (int i = 0; i < numStudents; i++) {
       cout << "Enter Student " << (i + 1) << " ID:\n ";
       cin >> studentIDs[i];
        
        do {
            cout << "Enter pass (1) or fail (2) for Student\n" << (i + 1) << ": ";
            cin >> studentStatus[i];
        } while (studentStatus[i] != 1 && studentStatus[i] != 2);

        if (studentStatus[i] == 1) {
            passCount++;
        } else {
            failCount++;
        }
    }

    cout << "\nPass Students: " << passCount << endl;
    cout << "\nFail Students: " << failCount << endl;

    return 0;
}
