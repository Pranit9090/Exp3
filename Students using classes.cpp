#include <iostream>

using namespace std;

class Student {
public:
    char name[50];
    int status; 

    void entry() {
        cout << "Enter name of student: ";
        cin >> name;

        cout << "Enter pass status (1 for pass, 0 for fail) for " <<" : ";
        cin >> status;
    }
};

int main() {
    int num = 3;
    Student stu[num];
    int p_count = 0;
    int f_count = 0;


    for (int i = 0; i < num; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        stu[i].entry();

        if (stu[i].status == 1) {
            p_count++;
        } else if (stu[i].status == 0) {
            f_count++;
        }
    }
    cout << endl;


    cout << "Number of Pass Candidates: " << p_count << endl;
    cout << "Number of Fail Candidates: " << f_count << endl;
    
    if(p_count>=2)
    {
        cout<<"Raise Tuition ..!\n";
    }
    else
    {
        cout<<"Need Improvement";
    }

    return 0;
}
