#include<iostream>
#include<vector>
using namespace std;

int g=10;
auto l1= [=](){return ++g;}; //g++ and g+1 both are different
auto l2= [g=g](){return g+1;};

int main()
{
    g=20;
    cout<<l1()<<endl;
    cout<<l2();

}
