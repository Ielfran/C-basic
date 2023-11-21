#include <iostream>
using namespace std;
class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l,double w)
    {
        length = l;
        width = w;
    }
    double getnum()
    {
        cout << "Enter the length:";
        cin >> length;
        cout << "Enter the width:";
        cin >> width;
    }
    double area()
    {
        return length * width;
    }
    double perimeter()
    {
        return 2 * (length + width);
    }
    double printit()
    {
        cout << "The area is:"<<area()<<endl;
        cout<<"The perimeter is:"<<perimeter()<<endl;
    }

}; 
int main()
{
    Rectangle rect1(0,0);
    rect1.getnum();
    rect1.printit();
    return 0;
}