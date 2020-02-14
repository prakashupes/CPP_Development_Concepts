#include<iostream>
using namespace std;
class Plus
{
    int v;
    public:
    Plus(int x) : v{x} {}
    int operator () (int x)
    {
        return x+v;
    }

    int plus1(int x)
    {
        return x+v;

    }

};
int main()
{
    auto p= Plus(1);
    auto x=p.plus1(42);
    //auto x1=4;
    cout<<x<<endl;
    //cout<<x1<<endl;
    auto lambda= [val=1](const int x) { return x+val;};
    auto  x2 =lambda(42);
    cout<<"Using lambda "<<x2<<endl;




}
