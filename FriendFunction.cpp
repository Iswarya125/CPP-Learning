#include <iostream>
using namespace std;
class A;
class B
{
    public:
    void show_x(A &a);
};

class A
{
    public:
        A(int x) : x{x}{}
        friend void B::show_x(A& a);
    private:
        int x;
};


void B::show_x(A& a)
{
    cout<<"value of x in A is "<<a.x;
}


int main()
{
    B b;
    A a(20);
    b.show_x(a);
}