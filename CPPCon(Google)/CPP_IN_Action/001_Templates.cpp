
//http://www.cplusplus.com/doc/oldtutorial/templates/
#include<iostream>
using namespace std;

//If both have diff data types
template<typename T1, class T2>
T1 myFun(T1 a,T2 b)
{
    return (a>b?a:b);
}

int main()
{
    int a=5;
    long b= 10;
    cout<<myFun(a,b); //
    //cout<<T1;

}
