/* Task -> To find the area and volume by using function implementation*/


#include<iostream>
using namespace std;
class Measure                           //class name
{
    public:
    int length;                         //attribute
    int width;
    int height;
    void setInput(int a, int b, int c)  //user defined method to initialize values
    {
        length=a;
        width=b;
        height=c;
    }
    int area()                          //function to find area
    {
        return length*width;
    }
    int volume()                        //funtion to find volume
    {
        return length *width*height;
    } 
};

int main()
{
    Measure obj1,obj2;                          //creating objects of class Measure
    cout<<"Enter the length : ";
    cin>>obj1.length; cout<<"Enter the width : ";
    cin>>obj1.width; cout<<"Enter the height : ";
    cin>>obj1.height;
    obj1.setInput(obj1.length, obj1.width,obj1.height);
    cout<<"The area for obj1 "<<obj1.area() <<endl; cout<<"The volume for obj1 "<<obj1.volume() <<endl<<endl<<endl;
    cout<<"Enter the length : ";
    cin>>obj2.length; cout<<"Enter the width = ";
    cin>>obj2.width; cout<<"Enter the height = ";
    cin>> obj2. height;
    obj2.setInput(obj2.length, obj2.width, obj2.height); cout<<"The area for obj2 "<<obj2.area() <<endl;
    cout<<"The volume for obj2 "<<obj2.volume() <<endl;
    return 0;
}