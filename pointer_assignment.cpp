#include<iostream>
using namespace std;
class student
{
	private:
		int marks=0;
		char name[20];
	public:
		int rollno;

	void getdata()
	{
		cout<<"Enter your name : ";
		cin>>name;
		cout<<"\nEnter your roll no : ";
		cin>>rollno;
		cout<<"\nEnter your total marks : ";
		cin>>marks;
		cout<<endl;
		
	}
	void printdata()
	{
		cout<<"Entered name : "<<name<<endl;
		cout<<"Entered roll no : "<<rollno<<endl;
		cout<<"Entered marks : "<<marks<<endl;
		
	}	
};
class derived : public student 
{
	public:
		derived()
		{
		}
};
	
int main()
{
	derived d[3];
	derived *ptr;
	ptr=&d[0];
	for(int i=0;i<3;i++)
	{
		ptr->getdata();
		ptr++;
		char temp=getchar();
	}
	ptr = &d[0];
	cout<<endl<<"Students information is as follows"<<endl;
	for(int i=0;i<3;i++)
	{
		ptr->printdata();
		ptr++;
	}
	return 0;
}



