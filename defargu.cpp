#include<iostream>
using namespace std;
int simpleint(float amt=45,float t=6,float r=7){
    return (amt*t*r)/100;
}
int main(){
    float amt,t,r;
    cout<<"Enter the amount, rate and time for calculating simple interest:";
    cout<<endl;
    cin>>amt;
    cin>>t;
    cin>>r;
    cout<<"All the variable"<<simpleint(amt,t,r)<<endl;
    cout<<"only the amount"<<simpleint(amt)<<endl;
    cout<<"no amt"<<simpleint(t,r)<<endl;
    return 0;
}
