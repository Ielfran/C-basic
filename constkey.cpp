#include<iostream>
using namespace std;
void print(int age){
    cout<<"The age is for dog would be:"<<age*7;
}
int main(){
    const int age=50;
     print(age); 
    return 0;
}