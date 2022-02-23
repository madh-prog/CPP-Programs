#include<iostream>
using namespace std;
inline int cube(int no)     //Inline cube function
{
	return no*no*no;
}
int cubevolume(int l=5,int w=6, int h=7)    //function defination
{
	l = l++;
	w = w-1;
	h = h+l;
	return l*w*h;
}

int main()
{
	int no;
	cout<<"Enter number : ";
	cin>>no;
	cout<<"Cube of number :"<<cube(no)<<endl;   //use inline function
	cout<<cubevolume()<<endl;      //cubevolume function call
	cout<<cubevolume(9)<<endl;
	cout<<cubevolume(15,12)<<endl;
	cout<<cubevolume(3,4,7)<<endl;
	return 0;
}