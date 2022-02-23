/* Program to do different arithmetic operation by using functions and switch case */

#include<iostream>
using namespace std; 
class Calculator                    //class 
{
    public:
    int input1;                     //attributes
    int input2;
    void setInput(int a, int b)     //function to initialize values
    {
        input1=a;
        input2=b;
    }
    int add()                       //funtion to perform addition
    {
        return input1+input2;
    }
    int sub()                       //funtion to perform substaraction
    {
        return input1-input2;
    }
    int mult()                      //funtion to perform multiplication
    {
        return input1*input2;
    }
    int div()                       //funtion to perform division
    {
        return input1/input2;
    }
    int mod()                       //funtion to perform modulo division
    {
        return input1%input2;
    }
    int square()                    //funtion to perform square of a number
    {
        return input1*input1;
    }
    int cube ()                     //funtion to perform cube of a number
    {
        return input1*input1*input1;
    }
};
int main()
{
    int ch;
    Calculator obj1; 
    while(ch!=8)                    //menu of program
    {
        cout<<"1. Addition"<<endl<<<"2.Substraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl<<"5. Modulo Division"<<endl<<"6.Square"<<endl<<"7.Cube"<<endl<<"8.Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the number1: ";
                cin>>obj1.input1;
                cout<<"Enter the number2 : ";
                cin>>obj1.input2;
                cout<<"The sum of inputs is "<<obj1.add()<<endl;
                break;
            case 2:
                cout<<"Enter the number1: ";
                cin>>obj1.input1;
                cout<<"Enter the number2: ";
                cin>>obj1.input2;
                cout<<"The substarction of inputs is"<<obj1.sub() <<endl;
                break;
            case 3 :
                cout<<"Enter the number1 : ";
                cin>>obj1.input1;
                cout<<"Enter the number2 : ";
                cin>>obj1.input2;
                cout<<"The multiplication of inputs is"<<obj1.mult() <<endl;
                break;
            case 4 :
                cout<<"Enter the number1 : ";
                cin>>obj1.input1;
                cout<<"Enter the number2 : ";
                cin>>obj1.input2;
                cout<<"The division of inputs is"<<obj1.div() <<endl;
                break;
            case 5 :
                cout<<"Enter the number1: "; 
                cin>>obj1.input1;
                cout<<"Enter the number2 : "; 
                cin>>obj1.input2; 
                cout<<"The modulo division of inputs is"<<obj1.mod() <<endl;
                break;
            case 6 :
                cout<<"Enter the number: ";
                cin>>obj1.input1; 
                cout<<"The square of input is "<<obj1.square() <<endl;
                break;
            case 7:
                cout<<"Enter the number : "; 
                cin>>obj1.input1; 
                cout<<"The cube of inputs is "<<obj1.cube() <<endl;
                break;
            case 8:
                break;
            
            default :
                cout<<"\nEnter valid choice!"<<endl; 
                break;
        }
    }
    return 0;
}