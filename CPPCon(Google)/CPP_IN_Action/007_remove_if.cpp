#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Foo
{
    public:
    bool expired;

};
int main()
{
    vector <Foo> v;
    remove_if(v.begin(),v.end(),[](const Foo& foo){return foo.expired;});
}
