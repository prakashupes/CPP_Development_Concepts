#include<thread>
#include<iostream>
#include <chrono>
#include <algorithm>
using namespace std;
using namespace std::chrono;

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
	long t=1000; //rnning program for 1000 microsec
	while(t>0)
	{
		auto start = high_resolution_clock::now();
		std::thread t1(pluss,0);
		auto end = high_resolution_clock::now();
		t1.join();
		auto x= duration_cast<microseconds> (end - start); //this is long type after x.count();
		t=t-x.count();
	}

	
	
	 //cout<<"\n"<<x.count()/100000;
	return 0;


}
