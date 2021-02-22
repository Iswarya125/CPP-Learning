// 1. Keyword "friend" is used to make some [function OR class] as friend of your class.
// 2. Friend function OR friend class can access private/public/protected Data Member OR Member Functions of another class.
// 3. Function can not become friend of another function.
// 4. Class can not become friend of function.
// 5. Friendship is not mutual. If a class A is friend of B, then B doesn’t become friend of A automatically.
// 6. Friendship is not inherited.
// Eg use case for friend - during unit testing, Manager->employee relationship

#include <iostream>
using namespace std;

class A
{
    public:
        friend class B;
    private:
        int x;
};

class B
{
    public:
    void update(A& a)
    {
        a.x = 10;
    }
    void show(A& a)
    {
        cout<<"value of x in class A is "<<a.x<<endl;
    }
};

int main()
{
    B b;
    A a;
    b.update(a);
    b.show(a);
    return 0;
}