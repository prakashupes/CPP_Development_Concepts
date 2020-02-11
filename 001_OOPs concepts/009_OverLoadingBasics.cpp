#include<iostream>
using namespace std;
class point
{
    int x,y;
    public:
    point(int x1, int y1) : x{x1},y{y1}
    {
    }
    point()
    {

    }

    point add(point p) // why ?? point add(point& p)
    {
        point p1;
        p1.x =x+p.x;
        p1.y=y+p.y;
        return p1;

    }

    point operator + (point p)
    {
        point p1;
        p1.x=x+p.x;
        p1.y=y+p.y;
        return p1;

    }
    void get()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
 {
    point p(1,2);
    point p2(3,4);
    //point p3=p.add(p2);
    //p3.get();
    point p3= p+p2; //p3=p1.operator::+(p2)
    p3.get();

}
