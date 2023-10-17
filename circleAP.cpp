#include<iostream>
using namespace std;
const double PI=3.14159;
int area(int &r){
    return PI*r*r;
}
int perimeter(int &r){
    return 2*PI*r;
}
int main(){
    cout<<"Enter the radius for this circle";
    int r;
    cin>>r;
    int a=area(r);
    int p=perimeter(r);
    cout<<"The area of the circle is:"<<a<<endl;
    cout<<"The perimeter of the circle is:"<<p<<endl;
    return 0;
}