#include<thread>
#include<iostream>
using namespace std;
void pluss(int t)
{
	cout<<"Initially t :" <<t<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<t++;
	}
}

int main()
{
	std::thread t1(pluss,0);
	t1.join();
	return 0;


}
