//https://www.geeksforgeeks.org/constructors-c/

#include <iostream>
using namespace std;

class developer
{
    int x;
    public:
    developer() = default;
    developer(int x):x{x}{cout<<"constructor of developer class"<<endl;}
    void print()
    {
        cout<<"Inside developer class"<<endl;
    }
};

class engineer
{
    int y;
    public:
    engineer() = default;
    engineer(int y):y{y}{cout<<"constructor of engineer class"<<endl;}
    void print()
    {
        cout<<"Inside engineer class"<<endl;
    }
};

//order of calling of base class constructor is developer followed by engineer - below line decides that
class softwareEngineer:public developer,public engineer
{
    public:
    softwareEngineer() = default;
    softwareEngineer(int x, int y):engineer(y),developer(x)
    {
        cout<<"Inside the constructor of softwareEngineer"<<endl;
    }
};

int main()
{
    softwareEngineer s1(2,3);
    //compiler will not generate default constructor since we have defined the parameterised constructor so default constructor is made default in all the class
    softwareEngineer s2;
    //s1.print(); // this results in ambiguous function call error since engineer as well as developer both parent classes have same method.
    // below process is called object slicing - now e1 will have all the property of s1 wrt to engineer class 
    // properties wrt to the developer class will not be copied to e1.
    engineer e1 = s1;
    e1.print();
    s1.engineer::print();
    developer d1 = static_cast<developer>(s1);
    d1.print();
    return 0;
}