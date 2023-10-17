#include<iostream>
using namespace std;
struct details{
    int age;
    char name[20];
};
int main(){
    details d1,d2;
    details d3={12,"GAGAN"};
    cout<<"Enter the 1st age:";
    cin>>d1.age;
    cout<<"Enter the 1st name:";
    cin>>d1.name;
    cout<<"Enter the 2nd age:";
    cin>>d2.age;
    cout<<"Enter the 2nd name:";
    cin>>d2.name;
    cout<<"The first name and age is:"<<d1.age<<" "<<d1.name<<endl;
    cout<<"The second name and age+d3 age is:"<<d2.age+d3.age<<" "<<d2.name<<endl;
    cout<<"The third name and age is:"<<d3.age<<" "<<d3.name<<endl;
    return 0;
}