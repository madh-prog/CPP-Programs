#include <iostream>
using namespace std;

class Distance
{
    public:
    int km ,meter;
    
    void set()
    {
        int k, m;
        cin >> k>>m;
        km =k;
        meter =m;
    }
    void disp(Distance obj)
    {
        cout<<"km = "<<obj.km<<endl<<"meter = "<<obj.meter<<endl;
    
    }
    
    Distance add(Distance obj1,Distance obj2)
    {
       
        Distance obj3;
        obj3.km=obj1.km+obj2.km;
        obj3.meter =obj1.meter+obj2.meter;
        
        
        if(obj3.meter >=1000)
        {
            obj3.km+=1;
            obj3.meter=obj3.meter-1000;
            
        }
        return obj3;
    }
};
int main()
{
    Distance d1;
    Distance d2;
    Distance d3;
    
    d1.set();
    d2.set();
    
    cout<<"Object d1"<<endl;
    d1.disp(d1);
    cout<<"Object d2"<<endl;
    d2.disp(d2);
    
    
    d3=d3.add(d1,d2);
    cout<<"Object d2"<<endl;
    d3.disp(d3);
    
    return 0;
}
