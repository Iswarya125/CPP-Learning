//https://www.learncpp.com/cpp-tutorial/the-virtual-table/
#include <iostream>
using namespace std;

class base
{
    public:
        virtual void show() = 0;

};

class derived : public base
{
    public:
        virtual void show() = 0;

};

class derived1: public derived
{   
    public:
    void show()
    {
        cout<<"inside class derived1"<<endl;
    }
};

int main()
{
    derived1 d;
    base *p = &d;
    p->show();
    return 0;
}