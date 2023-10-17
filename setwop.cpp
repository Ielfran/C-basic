#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int k,b;
    cout<<"Enter the population in kathmandu:";
    cin>>k;
    cout<<"Enter the population in biratnagar:";
    cin>>b;
    int population=5690886;
    cout<<setw(14)<<"POKHARA"<<setw(9)<<population<<endl;
    cout<<setw(14)<<"KATHMANDU"<<setw(9)<<k<<endl;
    cout<<setw(14)<<"BIRATNAGAR"<<setw(9)<<b<<endl;
    return 0;
}

