/*#include<iostream>
using namespace std;
void Xtest(int test)
{
	cout<<"Inside Xtest,test is : "<<test<<"\n";
	if(test) throw test;
}
int main()
{
	cout<<"Start\n";
	try
	{
		cout<<"Inside the try block\n";
		Xtest(0);
		Xtest(1);
		Xtest(2);
	}
	catch(int i)
	{
		cout<<"Caught an error\n";
		cout<<i<<"\n";
	}
	cout<<"End ";
	return 0;
}*/


/*#include<iostream>
#include<exception>
using namespace std;
int main()
{
	try
	{
		int* myarray = new int [100000000000000];
		cout<<"Code run successfully";
		
	}
	catch(exception &e)
	{
		cout<<"std exception "<<e.what()<<endl;
	}
	return 0;
}*/

/*
#include<iostream>
#include<exception>
using namespace std;
class MyException : public exception
{
	public:
	const char * what() const throw()
	{
		return "Attempt to divide by zero\n";
	}
};
int main()
{
	try
	{
		int x,y;
		cout<<"Enter the two numbers:\n";
		cin>>x>>y;
		if(y==0)
		{
			MyException z;
			throw z;
		}
		else
		{
			cout<<"x/y="<<x/y<<endl;
		}
	}
	catch(exception &e)
	{
		cout<<e.what();
	}
	return 0;
}*/


/*Exception in inheritance
#include<iostream>
using namespace std;
class Base{};
class Derived: public Base
{
};
int main()
{	
	try
	{
		throw Base();
	}
	
	catch(Derived d)
	{
		cout<<"Derived object caught";
	}
	catch(Base b)
	{
		cout<<"Base object caught";
	}
	return 0;
}*/


#include<iostream>
using namespace std;
class Divide
{
	private:
	int *x;
	int *y;
	public:
	Divide()
	{
		x=new int();
		y=new int();
		cout<<"Enter two numbers:";
		cin>>*x>>*y;
		try
		{
			if(*y==0)
			{
				throw *x;
			}
		}
		catch(int)
		{
			delete x;
			delete y;
			cout<<"Second number cannot divide by 0"<<endl;
			throw;
		}
	}
	~Divide()
	{
		try
		{
			delete x;delete y;
		}
		catch(...)
		{
			cout<<"Error while deallocating memmory"<<endl;
		}
	}
	float Division()
	{
		return (float)*x/ *y;
	}
};

int main()
{
	try
	{
		Divide d;
		float res=d.Division();
		cout<<"Result of division is:"<<res;
	}
	catch(...)
	{
		cout<<"Unknown Exception"<<endl;
	}
return 0;
}
	
