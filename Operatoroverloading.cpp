#include<iostream>
using namespace std;
class Complex
{
	public:
	int real,img;
	Complex()
	{
		real=0;
		img=0;
	}
	Complex(int x,int y)
	{
		real=x;
		img=y;
	}
	void display()
	{
	cout<<"The real part ="<<real<<" and the imaginary part = "<<img<<endl<<endl;
	}
	//overload '+' operator
	friend Complex operator + (Complex, Complex);
	//overload '-' operator
	friend Complex operator - (Complex, Complex);
	//overload '*' operator
	friend Complex operator * (Complex, Complex);
	//overload '/' operator
	friend Complex operator / (Complex, Complex);
	//overload '%' operator
	Complex operator % (Complex ob)
	{
		Complex temp;
		temp.real = real % ob.real;
		temp.img = img % ob.img;
		return temp;
	}
	//overload '==' operator
	friend void operator == (Complex, Complex);

	//overload '<' operator
	
	void operator < (Complex ob)
	{
		if(real < ob.real)
			cout<<"The real part of c2 is greater than c1"<<endl<<endl;
		else
			cout<<"The real part of c2 is not greater than c1"<<endl<<endl;
	}

	//overload '>' operator

	void operator > (Complex ob)
	{
		if(img > ob.img)
			cout<<"The img part of c2 is less than c1"<<endl<<endl;
		else
			cout<<"The img part of c2 is not less than c1" <<endl <<endl;
	}	

	//overload '!=' operator

	void operator != (Complex ob)
	{
		if(real != ob.real && img != ob.img)
		{
			cout<<"The real and img part of c1 and c2 is not equal" <<endl;
		}
		else
		{
			cout<<"The real and img part of c1 and c2 is equal" <<endl;
		}
	}

	//For Unary Operator

	void operator - ();
	void operator ++ ();
	void operator ++ (int);
	Complex operator -- ();
	
};		//end of Complex class


/*For Binary Operator */


Complex operator + (Complex ob, Complex ob1)
{
	Complex temp;
	temp.real = ob.real + ob1.real;
	temp.img = ob.img + ob1.img;
	return temp;
}
Complex operator - (Complex ob, Complex ob1)
{
	Complex temp;
	temp.real = ob.real - ob1.real;
	temp.img = ob.img - ob1.img;
	return temp;
}
Complex operator * (Complex ob, Complex ob1)
{
	Complex temp;
	temp.real = ob.real * ob1.real;
	temp.img = ob.img * ob1.img;
	return temp;
}
Complex operator / (Complex ob, Complex ob1)
{
	Complex temp;
	temp.real = ob.real / ob1.real;
	temp.img = ob.img / ob1.img;
	return temp;
}
void operator == (Complex ob, Complex ob1)
{
	if(ob.real == ob1.real && ob.img == ob1.img)
		cout<<"Both objects has same values"<<endl<<endl;
	else
		cout<<"Both objects has not same values"<<endl<<endl;
}

/* For Unary Operator*/


void Complex::operator -()
{
	real=-real;
	img=-img;
}
void Complex::operator ++()
{
	real=++real;
	img=++img;
}
void Complex::operator ++(int)
{
	real=real++;
	img=img++;
}
Complex Complex::operator --()
{
	Complex temp;
	temp.real=--real;
	temp.img=--img;
	return temp;
}
int main()
{
	Complex c1(4,1),c2(4,1);
	cout<<"For C1: ";
	c1.display();
	cout<<"For C2: ";
	c2.display();
	
	Complex c3;
	c3=c1+c2;
	cout<<"For addition: ";
	c3.display();

	c3=c1+c2-c1*c2/c2;
	cout<<"for mixed operation: ";
	c3.display();

	c3=c1-c2;
	cout<<"For substraction: ";
	c3.display();

	c3=c1*c2;
	cout<<"For multiply: ";
	c3.display();

	c3=c1/c2;
	cout<<"For division: ";
	c3.display();
		
	c3 = c1%c2;
	cout<<"For modulo div: ";
	c3.display();
	
	c1==c2;
	
	c1<c2;
	
	c1>c2;
	
	c1!=c2;

	-c2;
	c2.display();

	cout<<"***************************"<<endl;
	Complex c4(4,5);
	--c4;
	c4.display();
	c3=--c4;
	c3.display();

	++c4;
	c4.display();
	c4++;
	c4.display();
	return 0;
}