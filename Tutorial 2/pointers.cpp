#include <iostream>
using namespace std;

void changeb(int &b){
    b = 25;
}
int main(){
    int a  = 10;
    int *ptr  = &a; 
    int **parptr = &ptr; // we use double * to create a parent pointer / pointer to pointer

    cout<<ptr; 
    cout<<'\n'<<*parptr; //one * can be used to return the address and two can be used to return the value stored at that address
    cout<<'\n'<<ptr; 

    int *ptr2 = nullptr;
    cout<<'\n'<<ptr2;

    int b = 20;
    float c = 2.34;
    changeb(b);
    cout<<endl<<b<<endl;

    int arr[] = {1,2,3,4,5,6,7,8,9};
    cout<<arr<<endl;

    int d = 9;
    int *ptr3 = &d;
    cout<<ptr3<< endl;
    ptr3++;
    cout<<ptr3<<endl;

    int e = 21;
    int *ptr4 = &e;
    cout<<ptr4<<endl;
    ptr4 = ptr4 +3;
    cout<<ptr4<<endl;

    cout<<*(arr)<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;
    cout<<*(arr+4)<<endl;
    cout<<*(arr+5)<<endl;
    cout<<*(arr+6)<<endl;
    cout<<*(arr+7)<<endl;
    cout<<*(arr+8)<<endl;

    int *ptr6;
    int *ptr5 = ptr6 + 2;
    cout<<"Here is the value of two int in bytes : "<<(ptr5 -ptr6)<<endl;
    
    cout<<(ptr5 > ptr6)<<endl;
}