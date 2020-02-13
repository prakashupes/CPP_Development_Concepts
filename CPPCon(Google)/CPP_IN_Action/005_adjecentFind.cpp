#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
//find all repeated elements in arr
{
    int arr[]={1,2,3,3,4,5,6,6,11,12,12,23,23};
    vector<int> v (arr,arr+14);

    vector<int> ::iterator it=adjacent_find(v.begin(),v.end());
    while(it!=v.end())
    {
        cout<<"Repeated is "<<*it<<endl;
        it=adjacent_find(++it,v.end());

    }

}
