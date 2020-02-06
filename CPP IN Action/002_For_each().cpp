#include<iostream>
#include<algorithm>
using namespace std;

class My //Can be struct
{
    public:
    void operator()(int i)
    {
        cout<<i<<" ";
    }

}obj;

void print(int i)
{
    cout<<i<<" ";
}
int main()
{
    int arr[]={1,2};
    for_each(arr,arr+2,My());
    cout<<endl;
    for_each(arr,arr+2,print);
}
