#include<iostream>
using namespace std;

class student
{ 
    public:
     int id,result;
}stud[10];

int main(){
    int i,pass=0, fail=0;
    for(i=0;i<10;i++)
    {
        cout<<"Enter ID: " ;
        cin>> stud[i].id;
        
        cout << "Enter 1 for pass & 2 for fail: ";
        cin>> stud[i].result;
        
        if(stud[i].result == 1)
            pass++;
        else
            fail++;
    }

    cout<<"\tNo of Passed student:\t"<<pass;
    cout<<"\tNo of Failed student:\t"<<fail;

    if(pass>8)
        cout<<"\n\tRaise Tution..!";
    else
    cout<<"\nNeed Improvement";

return 0;
}
