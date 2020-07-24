#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Person
{
    public:
    string fname,mname,lname;

    Person (string f,string m,string l) : fname{f} , mname{m}, lname {l} {} //or if we do not define
    //constructor then shallow copy autometic called



};
int main()
{
    vector<Person> p =  {
    {"Joe","p","smith"},
    {"Jane","q","jones"},
    {"Frank","p","johnson"},
    {"Sarah","b","smith"},
    {"Joe","x","jones"},
    {"Joe","a","smith"}
    }; // each {} is a object of person class, p[0] is object...etc

    //cout<<p[0].mname;

    cout<< "Before any sort data is : \n";
   // cout<<"l     f       m"<<endl;

    for(auto x: p)
    {
        cout<<x.fname <<" "<<x.mname<< " "<<x.lname<<endl;
    }

    cout<< "\nAfter sort (middle) data is : \n";
    sort(p.begin(),p.end(),[](const Person &p1 ,const Person &p2){ return (p1.mname< p2.mname) ;});
    for(auto x: p)
    {
        cout<<x.fname <<" "<<x.mname<< " "<<x.lname<<endl;
    }

    cout<< "\nAfter sort (fname) data is : \n";
    stable_sort(p.begin(),p.end(),
    [](const Person &p1 ,const Person &p2){ 
    return (p1.fname< p2.fname) ;});
    for(auto x: p)
    {
        cout<<x.fname <<" "<<x.mname<< " "<<x.lname<<endl;
    }
    cout<< "\nAfter sort (lname) data is : \n";
    stable_sort(p.begin(),p.end(),[](const Person &p1 ,const Person &p2){ return (p1.lname< p2.lname) ;});
    for(auto x: p)
    {
        cout<<x.fname <<" "<<x.mname<< " "<<x.lname<<endl;
    }
}
