#include<iostream>
using namespace std;
int gvar=56;
void localvar(){
    int a=59;
    cout<<"The local variable of the function is:"<<a<<endl;
}
void globalvar(){
    cout<<"The global varibale in this code is:"<<gvar<<endl;
}
int main(){
    int gvar=34;
    cout<<"The local variable is:"<<gvar<<endl;
    cout<<"The global variable is:"<<::gvar<<endl;
    localvar();
    globalvar();
    return 0;
}