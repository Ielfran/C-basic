#include<iostream>
using namespace std;
int multiply(int &i);
int &summat(int &i);
int a=4;
int main(){
    int i;
    
    cout<<"Enter the number :";
    cin>>i;
    int mult=multiply(i);
    cout<<"The multiplied number is:"<<mult<<endl;
    int add=summat(i);
    cout<<"The summed number is:"<<add<<endl;
}
int multiply(int &i){
    return a*i;
}
int &summat(int &i){
    return ++i;
}