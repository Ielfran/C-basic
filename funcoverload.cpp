#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
long double sumdou(long double x,long double y){
    return x+y;
}
int main(){
    long double x,y;
    int a,b;
    cout<<"Enter the number for integer sum:"<<endl;
    cin>>a>>b;
    cout<<"Enter the number for long double sum"<<endl;
    cin>>x>>y;
    int intadd=sum(a,b);
    long double intadddoub=sumdou(x,y);
    cout<<"The integer sum is:"<<intadd<<endl;
    cout<<"The long double sum is:"<<intadddoub<<endl;
    return 0;
}