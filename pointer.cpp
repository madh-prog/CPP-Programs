#include<iostream>
using namespace std;
int main()
{
	/*float *pt = new float;
	*pt = 55;
	cout<<"value= "<<*pt;
	cout<<"\naddress= "<<pt;
	cout<<"\nsize= "<<sizeof(*pt);
	cout<<"\nsize ptr= "<<sizeof(pt);
	cout<<"\naddress of ptr = "<<&pt<<endl;*/
	int *ps = new int;
	delete ps;
	int jugs =5;
	int *pi = &jugs;
	delete pi;
	return 0;
}
