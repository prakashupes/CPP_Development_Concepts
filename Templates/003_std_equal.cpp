#include<iostream>
using namespace std;
template <typename T1,class T2>
bool myEqual(T1 firs1, T1 last1, T2 first2)
{
    while(firs1!=last1)
    {
        if(*firs1!=*first2)
            return false;
        firs1++,first2++;
    }
    return true;
}
int main()
{
    int arr1[]={1,2,3};
    int arr2[]={1,2,3}; //int arr2[]={1,2,3}; will also returns true;

    cout<<"Using std::equal "<<equal(arr1,arr1+3,arr2)<<endl;
    cout<<"Using My::myequal "<<myEqual(arr1,arr1+3,arr2)<<endl;
}
