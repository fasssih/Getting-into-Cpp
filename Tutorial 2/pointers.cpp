#include <iostream>
using namespace std;

int main(){
    int a  = 10;
    int *ptr  = &a; 
    int **parptr = &ptr;
    
    cout<<ptr; 
    cout<<'\n'<<*parptr;
    cout<<'\n'<<*ptr; 
}