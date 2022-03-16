#include<iostream>
using namespace std;
/*class base
{
	protected:
	int i,j;
	public:
	void set(int a,int b)
	{
		i=a;
		j=b;
	}
	void show()
	{
		cout<<i<<" " <<j<<endl;
	}
};
class derived1 : private base
{
	int k;
	public:
	void set() 
	{
		k=i*j;
	}
	void showk()
	{
		cout<<k<<endl;
	}
};
class derived2 : public derived1
{
	int m;
	public:
	void setm()
	{
		m=i-j;
	}
	void showk()
	{
		cout<<m<<endl;
	}
}; 
int main()
{
derived1 ob(3);
derived2 ob1(3);
ob.set(1,2);
ob.show();
ob1.set(3,4);
ob1.show();
return 0;
}*/

class ABC 
{
	public:
	void setProtMemb(int i)
	{
	m_protMemb=i;
	}
	void Display()
	{
		cout<<m_protMemb<<endl;
	}
	protected:
	int m_protMemb;
	void Protfunc()
	{
		cout<<"Access allowed"<<endl;
	}
};
class XYZ : public ABC 
{
	public:
	void useProtfunc()
	{
	Protfunc();
	}
};
int main()
{
ABC a;
XYZ x;
//a.m_protMemb;
a.setProtMemb(90000);
a.Display();
//a.Protfunc();

return 0;
}

/*class ABC
{
public:
void display()
{
cout<<"This is parent class";
}
};
class XYZ : public ABC
{
public:
void display()
{
cout<<"This is parent class";
}
};*/

