#include<iostream>
using namespace std;
int main(){
    int num[]={3,4,78,89,5};
    int *point=num;
    for(int i=0;i<6;i++){
       cout<<*point<<" ";
       point++;
    }
    return 0;
}