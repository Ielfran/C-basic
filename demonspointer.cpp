#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number to be pointed:";
    int x;
    cin>>x;
    int *a;
    a=&x;
    cout<<"The value of number is:"<<x<<endl;
    cout<<"The address of number is:"<<&x<<endl;
    cout<<"The value of pointer is:"<<*a<<endl;
    cout<<"The address of pointer is:"<<a<<endl;
    return 0;
}