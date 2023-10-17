#include<iostream>
using namespace std;
int main(){
    int i[5];
    int *point=i;
    cout<<"Enter the array of number:"<<endl;
    for(int a=0;a<5;a++){
        cin>>i[a];
    }
    cout<<"The number printed through pointer:"<<endl;
    for(int b=0;b<5;b++){
        cout<<*(point+b)<<endl;
    }
    return 0;
}