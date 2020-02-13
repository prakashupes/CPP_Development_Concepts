#include<iostream>
#include<algorithm>
using namespace std;
//Backend of for_each

template <typename I, typename Fn>
Fn my_for (I first,I last,Fn fun)
{
    while(first!=last)
    {
        fun(*first);
        //cout<<"Inside "<<*first<<endl;
        first++;

    }
    return fun;

}

class My //Can be struct
{
    public:
    void operator()(int i)
    {
        cout<<i<<" ";
    }

};

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
    cout<<"Using my for_each"<<endl;
    my_for(arr,arr+2,print);
}
