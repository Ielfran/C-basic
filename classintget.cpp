#include<iostream>
using namespace std;
class integer{
    private:
        int intvalue;
        float floatvalue;
        char charvalue[100];
    public:
    void getvalue(){
        cout<<"Give the integer:";
        cin>>intvalue;
        cout<<"Give the float value:";
        cin>>floatvalue;
        cout<<"Give the character:";
        cin>>charvalue[100];
    }
    void printvalue(){
        cout<<"The entered integer, float and character value is:"<<endl;
        cout<<"The integer is:"<<intvalue<<endl;
        cout<<"The float value is:"<<floatvalue<<endl;
        cout<<"The character is:"<<charvalue[100]<<endl;
    }
};
int main(){
    integer c1;
    c1.getvalue();
    c1.printvalue();
    return 0;
}