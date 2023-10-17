#include<iostream>
using namespace std;
namespace first{
    int x=5;
}
namespace second{
    int x=8;
}
namespace third{
    int x=90;
}
namespace sum4=third;
void addition(){
    using namespace sum4;
    cout<<"The sum is:"<<x+first::x+second::x<<endl;
}
int main(){
    cout<<"Sum of first and second:"<<first::x+second::x<<endl;
    cout<<"Sum of first and second to third:"<<second::x+third::x<<endl;
    addition();
    return 0;
}