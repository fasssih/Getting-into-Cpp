#include <iostream>
#include <string>
using namespace std;

class teachers{
    public:
    string dept;
    string name;
    string grade;
    int salary;

    void changedept(string newdept){
        dept = newdept;
    }
    
};
int main(){
    teachers t1;
    t1.name  = "Usaid";
    t1.grade  = "8th";
    t1.dept = "ICS";
    t1.salary = 21990;

    cout<<t1.name<<" teaches the students of grade "<<t1.grade<<" Of the department "<<t1.dept<<" and earns a worthy salary of "<<t1.salary;

}