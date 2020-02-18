#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={1,2,3,4};

    auto x=for_each(arr,arr+4,[](int x){cout<<x<<" ";});

}
