#include <iostream>
using namespace std;

typedef struct employ{
    int eid;
    char favchar;
    int salary;
} emp;

int main(){
    
    employ harry;
    harry.eid = 18721;
    harry.favchar = 'c';
    harry.salary = 120000000;
    cout<<"Here is the id :"<<harry.eid<<endl;
    cout<<"Here is the favorite char:"<<harry.favchar<<endl;
    cout<<"Here is the salary :"<<harry.salary<<endl;
    emp shubham;
    shubham.eid = 18726;
    shubham.favchar = 'd';
    shubham.salary  = 12000000;
    cout<<"Here is the id:"<<shubham.eid<<endl;
    cout<<"Here is the favorite char :"<<shubham.favchar<<endl;
    cout<<"Here is the salary:"<<shubham.salary<<endl;

    

}