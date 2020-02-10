#include<iostream>
using namespace std;

class Iphone
{
    const string name="Iphone"; //At the time of declaration
    const int price;
    public:
    Iphone(int p) :price(p) {} //Using initializer list

    void get()
    {
        cout<<name<<" "<<price<<endl;
    }
};
int main()
{
    Iphone i1(2309),i2(33123);
    i1.get();
    i2.get();

}
