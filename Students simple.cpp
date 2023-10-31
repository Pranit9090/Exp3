#include <iostream>

int main() {
    int numStudents;
    int passCount = 0;
    int failCount = 0;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    for (int i = 1; i <= numStudents; i++) {
        int studentID, status;
        std::cout << "Enter Student " << i << " ID: ";
        std::cin >> studentID;
        
        do {
            std::cout << "Enter pass (1) or fail (2) for Student " << i << ": ";
            std::cin >> status;
        } while (status != 1 && status != 2);

        if (status == 1) {
            passCount++;
        } else {
            failCount++;
        }
    }
    std::cout << "Pass Students: " << passCount << std::endl;
    std::cout << "Fail Students: " << failCount << std::endl;

    return 0;
}
