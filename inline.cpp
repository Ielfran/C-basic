#include<iostream>
using namespace std;
inline int addit(int &a,int &b){
    return a+b;
}
int main(){
    int i[2];
    cout<<"Enter the number:";
    for(int a=0;a<2;a++){
        cin>>i[a];
    }
    int sum=addit(i[0],i[1]);
    cout<<"The summed number is:"<<sum<<endl;
    return 0;
}