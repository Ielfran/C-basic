#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the numbers"<<endl;
    int num[5];
    int i;
    for(i=0;i<5;i++){
    cin>>num[i];
    }
    for(int i=0;i<5;i++){
        for(int j=1+i;j<num[i];j++){
            if(num[i]>num[j]){
                int temp=num[j];
                num[j]=num[i];
                num[i]=temp;
            }
        }
    }
    cout<<"The greatest number is"<<num[5]<<endl;
    return 0;
}
