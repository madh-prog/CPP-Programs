#include<iostream>
using namespace std;

class Animal
{
	public:
		int legs =4;
	void display()
	{
		cout<<"Legs are : "<<legs<<endl;
	}
};
class Dog : public Animal
{
	public:
		int tail=1;
	void display1()
	{
		cout<<"Tail is : "<<tail<<endl;
	}
};
class C : public Dog,public D
{
	public:
		int eyes=2;
	void display2()
	{
		cout<<"Eyes are : "<<eyes<<endl;
	}
};
class D : public Dog
{
	public:
		int child=4;
	void display3()
	{
		cout<<"Childs are : "<<child<<endl;
	}
};
int main()
{
	Animal obj;
	Dog ob;
	C c;
	D d;
	cout<<"Function Call by object of Animal "<<endl;
	obj.display();
	cout<<"Function Call by object of Dog "<<endl;
	ob.display();
	ob.display1();
	cout<<"Function Call by object of C "<<endl;
	c.display();
	c.display1();
	
	cout<<"Function Call by object of D "<<endl;
	d.display();
	d.display1();
	
	return 0;
}
