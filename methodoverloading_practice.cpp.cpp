// Program to practice function concept with different arguments and data types*/
#include<iostream>
using namespace std;
int myfun(int i);
//int myfun(float i);
float myfun(float i);
//float myfun(int i);
int myfun(int i,int j);
//int myfun(float i,float j);
int myfun(float i,float j);
//float myfun(int i,int j);
int myfun(int i,int j,int k);
int myfun(float i,float j,float k);
int main()
{
    int temp=myfun(10);
    cout<<"Calling myfun : "<<endl;
    int temp1=myfun(14.6);
    cout<<"Calling myfun : "<<endl;
    int temp2=myfun(10,20);
    cout<<"Calling myfun : "<<endl;
    int temp3=myfun(10.9,20.6);
    cout<<"Calling myfun : "<<endl;
    int temp4=myfun(10,20,30)
    cout<<"Calling myfun) : "<<endl;
    int temp5=myfun(14.6,22.4,31.3)
    cout<<"Calling myfun : "<<endl;
    return 0;
}
int myfun(int i)
{
    return i;
}
int myfun(float i)
{
    return i;
}
int myfun(int i,int j)
{
    return i+j;
}
int myfun(float i,float j)
{
    return i+j;
}
int myfun(float i,float j,float k)
{
    return i+j+k;
}
int myfun(int i,int j,int k)
{
    return i+j+k;
}
