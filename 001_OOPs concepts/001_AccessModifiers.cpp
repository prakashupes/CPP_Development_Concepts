#include<iostream>
using namespace std;
class Parent
{
    protected:
    int id;

};

class Child : Parent
{
    public:
    Child(int id)
    {
        this->id=id;
    }
    void printId()
    {
        cout<<"ID : "<<id;
    }
};

int main()
{
    Child c(5);
    c.printId();

}
