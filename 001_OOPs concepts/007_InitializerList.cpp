#include<iostream>
using namespace std;

class Myclass
{
    int a,b;
    public:
    Myclass(int x,int y) : a{x},b{y} {// Rest of the code,We can use ()in plce of{} but problem of narro

    }
    void get()
    {
        cout<<a;
    }

};
int main()
{
    Myclass c(1,2);
    c.get();
    Myclass *c1=new Myclass(1,2); //
    c1->get();

    //cout<<"\n"<<sizeof(char);
}
