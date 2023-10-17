#include<iostream>
using namespace std;
int main(){
    int *num;
    num=new int;
    if(num!=nullptr){
        *num=34;
        cout<<"The dynamically allocated integer is:"<<*num;
        delete num;
    }
    else{
        cout<<"ERROR";
    }
    return 0;
}