#include<iostream>
#include<fstream>
/**********
We have three classes mainly used in file handelling
ofstream: Stream class to write on files
ifstream: Stream class to read from files
fstream: Stream class to both read and write from/to files.


Now the first step to open the particular file for read or write operation. We can open file by
1. passing file name in constructor at the time of object creation:

ifstream (const char* filename, ios_base::openmode mode = ios_base::in);
ifstream fin(filename, openmode) by default openmode = ios::in
ifstream fin(“filename”);


2. using the open method

ifstream fin; //creating the object of ifstream class

fin.open(filename, openmode) //then using the open method
fin.open(“filename”);

****************/



/************
Modes :
 These modes are defined in ios_base class, we can also acces these using ios class, becz ios is derived from ios_base class.
 

*********/
using namespace std;
void exapmle1()
{
	fstream file;
	file.open("ex2.txt",ios::in | ios::out);
	
	if(!file.is_open()){
	 cout<<"Error"<<endl;
	// exit(1);
	}

}

void exapmle2()
{
	fstream file;
	file.open("ex1.txt",ios::out  | ios::in | ios::ate); //out+ ate start working as append,
	if(!file.is_open())
	{
		cout<<"Not opened"<<endl;
		return;
	}
	cout<<"Witing into file"<<endl;
	file<<"this is ex2"<<endl;
	file.close();
	
	/****
	First we need to close the stream then again open it to read filename
	***/
	file.open("ex1.txt",ios::in);
	cout<<"Started reading"<<endl;
	string str;
	while(getline(file,str))
	{
		cout<<str<<endl;
	}
	file.close();
	
	

}
int main()
{

	exapmle1();
	exapmle2();
	
  
}

  

