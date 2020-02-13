#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={1,7,2,3,4};
    vector<int>::iterator it=adjacent_find(v.begin(),v.end(),greater<int>());
   // cout<<*it;
    if(it==v.end())
        cout<<"Sorted";

}
