#include<iostream>
//Shalow is prev example

using namespace std;
class My
{
     public:
    int a;
    int *p;

    My(int a,int b)
    {
        this->a=a;
        p=new int;
        *p=b;
    }
    //Shallow copy
   
    My(const My& m)
    {
        a=m.a;
        p=m.p;
    }
    
     /*
    My(const My& m)
    {
        a=m.a;
        p=new int;
        *p=*(m.p);
    }
    */


};

int main()
{
    My m(2,3);
    My m2=m;
    cout<<"For m: "<<endl;
    cout<<m.a<<" "<<*(m.p)<<endl;
    
    cout<<"For m2: "<<endl;
    cout<<m2.a<<" "<<*(m2.p)<<endl;
    *(m2.p)=5;
    
    cout<<"For m2: "<<endl;
    cout<<m2.a<<" "<<*(m2.p)<<endl;
    
    cout<<"For m: "<<endl;
    cout<<m.a<<" "<<*(m.p)<<endl;



}
