#include<iostream>
using namespace std;
class A
{
	public:
	void displayA()
	{
		cout<<"This is class A\n";
	}
};
class B
{
	public:
	void displayB()
	{
		cout<<"This is class B\n";
	}
};
class C : public A
{
	public:
	void displayC()
	{
		cout<<"This is class C\n";
	}
};
class D : public B
{
	public:
	void displayD()
	{
		cout<<"This is class D\n";
	}
};
class E : public C,public D
{
	public:
	void displayE()
	{
		cout<<"This is class E\n";
	}
};
class F : public E
{
	public:
	void displayF()
	{
		cout<<"This is class F\n";
	}
};
int main()
{
	A a;
	B b;
	C c;
	D d;
	E e;
	D d;
	E e; 
	F f;
	a.displayA();
	b.displayA();
	b.displayC();
	b.displayD();
	f.displayA();
	f.displayC();
	f.displayB();
	f.displayE();
	e.displayA();
	e.displayB();
	e.displayC();
	return 0;
}
