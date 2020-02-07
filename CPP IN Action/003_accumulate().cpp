#include<iostream>
#include<numeric>
using namespace std;
//Backend of accumulate
template <typename Iterator,typename INIT>
INIT acc(Iterator first,Iterator sec,INIT sum)
{
    while(first!=sec)
    {
        sum+=*(first);
        first++;
    }
    return sum;
}


int myFun(int sum,int b)
{
    cout<<sum<<" "<<b<<" ";
    return sum*b;
}
int main()
{
    int sum=1;
    int arr[]={2,5,7};
    cout<<accumulate(arr,arr+3,sum)<<endl; //First type

    cout<<accumulate(arr,arr+3,sum,myFun)<<endl; //SeconType

    cout<<acc(arr,arr+3,sum); //Using backend

}

