#include<iostream>
using namespace std;
class Myclass
{
    public:
    int x;

    Myclass( Myclass &m) //Copy constructor
    {
        x=m.x;
    }
    Myclass () //Default
    {

    }

};
int main()
{
    Myclass m1;
    m1.x=5;
    Myclass m2=m1; //copy constructor called
    cout<<m2.x;

}
