#include<iostream>
using namespace std;
class Point
{
    int arr[2]; //2d array, arr[0]->x

    public:
    Point(int x=0, int y=0)
    {
        arr[0]=x;
        arr[1]=y;
    }
     int& operator [] (int pos)
     {
        if(pos==0)
            return arr[0];
        else if(pos==1)
            return arr[1];
        else
            exit(0);


     }
};

int main()
{
    Point p(2,1);
    p[0]=3;
    cout<<p[0];
}
