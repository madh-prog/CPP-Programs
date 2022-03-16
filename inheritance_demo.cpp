#include<iostream>
using namespace std;
/* Single Inheritance

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
	void display2()
	{
		cout<<"Tail is : "<<tail<<endl;
	}
};
int main()
{
	Animal obj;
	Dog ob;
	obj.display();
	ob.display();
	ob.display2();
	return 0;
}*/

/* Multiple Inheritance 

class Person
{
	public:
		int number=10;
	void display()
	{
		cout<<"The number of Persons are : "<<number<<endl;
	}
};
class Student : public Person
{
	public:
		int number=5;
	void display2()
	{
		cout<<"The number of students are : "<<number<<endl;
	}
};
class ITStudent : public Student
{
	public:
		int number=2;
	void display3()
	{
		cout<<"The number of ITstudents are : "<<number<<endl;
	}
};
int main()
{
	Person p1;
	Student s1;
	ITStudent i;
	cout<<"Calling function by Person object : "<<endl;
	p1.display();
	cout<<"Calling function by Student object : "<<endl;
	s1.display();
	s1.display2();
	cout<<"Calling function by ITStudent object : "<<endl;
	i.display();
	i.display2();
	i.display3();
	return 0;
}*/



/* Multiple Inheritance

class Liquid
{
	public:
		int litre = 40;
	void Capacity()
	{
		cout<<"The capacity is : "<<litre<<endl;
	}
};
class Fuel
{
	public:
		int litre = 20;
	void Capacity1()
	{
		cout<<"The capacity is : "<<litre<<endl;
	}
};
class Petrol : public Liquid,public Fuel
{
	public:
		int litre = 30;
	void Capacity2()
	{
		cout<<"The capacity is : "<<litre<<endl;
	}
};
int main()
{
	Liquid l;
	Fuel f;
	Petrol p;
	l.Capacity();
	f.Capacity1();
	p.Capacity();
	p.Capacity1();
	p.Capacity2();
}*/


/*class A
{
	public:
		int no=5;
	void display()
	{
		cout<<"Number is : "<<no<<endl;
	}
};
class B : public A
{
	public:
		int no=3;
	void display1()
	{
		cout<<"Number is : "<<no<<endl;
	}
};
class C : public A
{
	public:
		int no=6;
	void display2()
	{
		cout<<"Number is : "<<no<<endl;
	}
};
class D : public B,public C
{
	public:
		int no=4;
	void display3()
	{
		cout<<"Number is : "<<no<<endl;
	}
};
int main()
{
	A a1;
	B b1;
	C c1;
	D d1;
	cout<<"Call by object of A"<<endl;
	a1.display();
	cout<<endl<<"Call by object of b"<<endl;
	b1.display();
	b1.display1();
	//b1.display3();
	cout<<endl<<"Call by object of c"<<endl;
	c1.display();
	c1.display2();
	//c1.display3();
	cout<<endl<<"Call by object of d"<<endl;
	//d1.display();
	d1.display1();
	d1.display2();
	d1.display3();
	return 0;
}*/


/* Virtual class
class A
{
public:
int i;
};
class B: virtual public A
{
public:
int j;
};
class C : public virtual A
{
public:
int k;
};
class D:public B,public C
{
public:
int sum;
};
int main()
{
D obj;
obj.i=10;
obj.j=20;
obj.k=30;
obj.sum=obj.i+obj.j+obj.k;
cout<<obj.sum<<endl;
}*/













class Base
{
int x;
public:
Base()
{
cout<<"BAse default constructor"<<endl;
}
};
class Derived : public Base
{
int y;
public:
Derived()
{
cout<<"Derived default cobstructor"<<endl;
}
Derived(int i)
{
cout<<"Parameterised constructor"<<endl;
}
};
int main()
{
Base b;
Derived d;
Derived d1(30);
}
