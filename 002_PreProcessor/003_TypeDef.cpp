#include<iostream>
using namespace std;
typedef string STR; //STR and string both can work like string
typedef class student
{
    STR msg;
    public:
    student(string str="") :msg{str} {}
    void get()
    {
        cout<<"Msg: "<<msg<<endl;

    }

}S;
int main()
{
    S s1;
    student s2("Using student");
    s1.get();
    s2.get();


}
