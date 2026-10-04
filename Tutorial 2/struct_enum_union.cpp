#include <iostream>
using namespace std;

typedef struct employ{
    int eid;
    char favchar;
    int salary;
} emp;
struct car{
    int model;
    float price;
    char prefix;
};

union money
{
    int pounds;
    float dollars;
    int rupees;
};

enum cars{toyota, beemer, marcos, carlos, bagatata};
int main(){
    
    // Struct to is used to group different types of data together
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
    car bmw;
    bmw.model = 1930;
    bmw.prefix = 'M';
    bmw.price = 19.29;
    cout<<"You bought your first car which is a "<<bmw.model<<" M series car worth "<<bmw.price<<" BTC"<<endl;
    
    // Union is used to share the same memory location with different types of data
    money cash;
    cash.pounds = 20;
    money changes;
    cash.dollars = 5.23;
    cout<<"The customer came and gave "<<cash.pounds<<" and got "<<cash.dollars<<" as change"<<endl;
    
    // Enum is used to creaete a fixed set of named values
    cout<<toyota<<endl;
    cout<<beemer<<endl;
    cout<<marcos<<endl;
    cout<<(toyota == 0);



}