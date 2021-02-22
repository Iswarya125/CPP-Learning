#include <iostream>
using namespace std;

class base
{
    public:
    void func1(int x)
    {
        cout<<"value of x is"<<x<<endl;
    }
};

class derived:public base
{
    public:
    //below line is required if derived class object gonna use the base class function if not 
    // only derived class function will get called.
   using base::func1;
    void func1(double y)
    {
        cout<<"value of y is"<<y<<endl;
    }
};

int main()
{
    derived d1;
    d1.func1(2);
    return 0;
}