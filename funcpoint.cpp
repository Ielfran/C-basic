#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int main(){
    int(*arithmetic)(int,int);
    cout<<"Enter the two numbers:"<<endl;
    int a,b;
    cin>>a>>b;
    int resultad=add(a,b);
    cout<<"Addition result:"<<resultad<<endl;
    unsigned int resultsub=subtract(a,b);
    cout<<"Subtraction result:"<<resultsub<<endl;
    return 0;
}