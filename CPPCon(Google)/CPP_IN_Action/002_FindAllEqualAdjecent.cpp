#include<iostream>
using namespace std;

template <typename T>
T findAdj(T first, T last)
{
    while(first!=last)
    {
        T next=first;next++;

        while(next!=last)
        {
            if(*first == *next)
                return next;
            first++;next++;

        }

    }
    return last;
}
int main()
{
    int arr[9]={1,1,2,3,4,4,5,6,6};
    auto i=findAdj(arr,arr+9);


    while(i!= (arr+9))
    {
        cout<<*i<<" ";
        i=findAdj(i+1,arr+9);
    //    cout<<*i<<" ";

    }

}
