#include<iostream>
using namespace std;
class Parent;
class Class3
{   public:
    void assecc(int i);

};
class Parent
{
    int id;
    friend class Class2; //Friend function
    friend void Class3::assecc(int i);
};
class Class2
{
    Parent p;
    public:
    Class2(int i)
    {

        p.id=i;
    }
    void print()
    {
        cout<<"id: "<<p.id<<endl;
    }

};
void Class3::assecc(int i)
{
     Parent p;
     p.id=i;
     cout<<"p.id: "<<p.id;

}

int main()
{
    Class2 c=Class2(3); //Explicit declaration
    c.print();
    Class3 c3;
    c3.assecc(5);

}
