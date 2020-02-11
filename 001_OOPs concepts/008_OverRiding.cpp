#include<iostream>
using namespace std;
class Parent
{
    public:
    void print()
    {
        cout<<"From P"<<endl;

    }
};

class Child:public Parent
{
    public:
    void print()
    {
        cout<<"From C";
    }

};


int main()
{
    Parent p;
    p.print();
    Child *c = new Child;
    c->print();
}
