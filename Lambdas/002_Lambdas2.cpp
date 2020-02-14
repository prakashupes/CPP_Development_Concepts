#include<iostream>
#include<vector>
using namespace std;

void call_lambda(vector<string> &v,string title)
{
    auto lambda =[t=title](vector<string> &v) {v.push_back(t);};
}
int main()
{


}
