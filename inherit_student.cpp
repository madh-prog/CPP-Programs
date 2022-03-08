#include<iostream>
#include<cstdio>
#include<string>

using namespace std;
class student
{
	public:
		int roll_no;
		string name;
	
	void display()
	{
		cout<<"Enter the roll no : ";
		cin>>roll_no;
		cout<<"enter the name : ";
		char temp=getchar();
		cout<<endl;
		getline(cin, name);
		cout<<"Roll No = "<<roll_no<<" and Name = "<<name<<endl;
	}
};
class test
{
	public:
		int marks[5];
	
	void display1()
	{
		cout<<"Enter marks of 5 subjects : "<<endl;
		for(int i=0;i<5;i++)
		{
			cin>>marks[i];
		}
		for(int i=0;i<5;i++)
		{
			cout<<"Marks in subject "<<i+1<<" ="<<marks[i]<<endl;
		}
	}	
	
};
class result : public student,public test
{
	public:
		int totalmarks=0,percentage=0;
	
	void total()
	{
		for(int i=0;i<5;i++)
		{
			totalmarks += marks[i];
		}
		cout<<"Total Marks = "<<totalmarks<<endl;
	}
	void percent()
	{
		percentage = totalmarks/5;
		cout<<"Percentage of student = "<<percentage<<endl;
	}
};
int main()
{
	student s;
	test t;
	result r;
	r.display();
	r.display1();
	r.total();
	r.percent();
	
	return 0;
}
