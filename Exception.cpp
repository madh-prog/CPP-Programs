#include<iostream>
using namespace std;
/*int main()
{
	int num1,num2,ans;
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"\nEnter number 2: ";
	cin>>num2;
	try
	{
		if(num2==0)
		{
			throw num2;
		}
		else
		{
			ans = num1/num2;
			cout<<"\nThe result is : "<<ans;
		}
	}
	catch(int x)
	{
		cout<<"\nCan't divide by  "<<x;
	}
	cout<<"\nEnd of Program"<<endl;
}*/


/*
int main()
{
	int num1,num2;
	float ans;
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"\nEnter number 2: ";
	cin>>num2;
	try
	{
		if(num2!=num1)
		{
			float ans=(float)num1/num2;
			if(ans<0)
				throw 'e';
			cout<<"num1/num2 = "<<ans;
		}
		else
		{
			throw num2;
		}
	}
	catch(int e)
	{
		cout<<"Exception: Divide by zero"<<endl;
	}
	catch(int st)
	{
		cout<<"Exception: Division is less than 1"<<endl;
	}
	catch(...)
	{
		cout<<"Exception:Unknown"<<endl;
	}
	return 0;
}*/

/*
int main()
{
	int a=1;
	try
	{
		try
		{
			throw 'a';
		}
		catch(int x)
		{
			cout<<"\n Exception in inner-try-catch block.";
			throw x;
		}
	}
	catch(int n)
	{
		cout<<"\n Exception in outer-try-catch block.";
		
	}
	cout<<"\nEnd of Program"<<endl;
	
}
*/









/*

int main()
{
	try{
	void demo();
	}
	throw(int,double)
	{
		int a=2;
		if(a==1)
		{
			throw a;
		}	
		else if(a==2)
		{
			throw 'A';
		}
		throw 4.5;
	}
	catch(int n)
	{
		cout<<"Welcome";
	}
	return 0;
}*/



class Test
{
	int x;
	public:
	void read()
	{
		cout<<"Enter a number : ";
		cin>>x;
	}
	class Even{};
	class Odd{};
	void check()
	{
		if(x%2==0)
			throw Even();
		else
			throw Odd();
	}
};
int main()
{
	Test t;
	t.read();
	try
	{
		t.check();
	}
	catch(Test::Even)
	{
		cout<<"Number is Even";
	}
	catch(Test::Odd)
	{
		cout<<"Number is Odd";
	}
	return 0;
}




















