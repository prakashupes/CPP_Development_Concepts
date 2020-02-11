#include "define.hpp"

class My
{
    uint32_t a=0;
    public:
    void operator () (const int& x)
    {
        a=x;

    }
    void get()
    {
        cout<<a;
    }
};
int main()
{
    My m;
    m(2);
    m.get();

}
