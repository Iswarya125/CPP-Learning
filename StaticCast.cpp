//1. For compatible type conversion,such as float to int
//2.For conversion operator and conversion constructors
//3.To avoid unrelated pointer conversions
//4.Avoids derived to private base pointer conversion.
//5.Use for all up-cast but never use for confused down-cast because there are no runtime checks performed
//for static_cast conversions.
//6.Intensions are more clear in c++ style cast (express your intent better and make code reviews easier)
//7.static_cast should be preferred when converting to void* or from void*
//8.Finding is easy.
//9.Error found at compile time


#include <iostream>
using namespace std;

class base
{
    virtual void print()
    {

    }
};
class derived : private base
{

};
class derived1 : public base
{

};
class derived2 : public base
{

};

int main()
{
    float f = 9.35;
    int i = static_cast<int>(f);
    cout<<i<<endl;

    int *p = &i;
    //char*c = static_cast<char*>(p);//invalid conversion

    derived d1;
    //base *b1 = static_cast<derived*>(&d1);//inaccessible base class as derived class is privately inherited from base

    derived1 d11;
    derived2 d21;

    base* p1 = static_cast<derived1*>(&d11);    // valid upcasts
    base* p2 = static_cast<derived2*>(&d21);

    //derived1 *d12 = static_cast<derived1*>(p2); // does not throw error but this should not happen - here better to use dynamic cast 
                                                //to detect wrong down casts - one constraint here is base should have one virtual function inorder to use dynamic cast

    derived1 *d12 = dynamic_cast<derived1*>(p2);    // Error should be shown, when Runtime type information flag is enabled because 
                                                    // dynamic_cast perfoms check during run time which increases run time overhead

    void* vp = static_cast<void*>(p);

}


