#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()

{
    int arr[4]={1,2,3,3};
    vector<int> v (arr,arr+8);

    vector<int> ::iterator it=adjacent_find(v.begin(),v.end());
    cout<<*it;


}
