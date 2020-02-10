#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int;
    int *q;
    q=new int[5];
    q[0]=5;
    cout<<*q;
}
