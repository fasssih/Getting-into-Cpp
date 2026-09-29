#include <iostream>
using namespace std;

int main(){
    int a  = 10;
    int *ptr  = &a; 
    int **parptr = &ptr; // we use double * to create a parent pointer / pointer to pointer

    cout<<ptr; 
    cout<<'\n'<<*parptr; //one * can be used to return the address and two can be used to return the value stored at that address
    cout<<'\n'<<ptr; 
}