#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
template <typename T1, class T2>
bool comp(T1 m1, T2 m2)
{
    return m1.size()==m2.size() && equal(m1.begin(),m1.end(),m2.begin());
}
int main()
{
    unordered_map<int,int> m1,m2;
    m1[1]=1;
    m1[2]=2;
    m1[3]=3;
    m2[1]=1;
    m2[2]=2;
    m2[3]=3;
    //It will work in unorderd_map if sequance is same
    cout<<comp(m1,m2);

}
