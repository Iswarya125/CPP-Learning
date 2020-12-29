// 1. reinterpret_cast can perform dangerous conversions because it can typecast any pointer to any other pointer.
// 2. reinterpret_cast is used when you want to work with bits.
// 3. The result of a reinterpret_cast cannot safely be used for anything other than being cast back to its original type.
// 4. we should be very careful when using this cast.
// 5. if we use this type of cast then it becomes non-portable product. - due to the various h/w architectures

#include <iostream>
using namespace std;

struct abc
{
    int a;
    int b;
    char c;
};

int main()
{
    char p ='a';
    int *i = reinterpret_cast<int*>(p); //dangerous
    //cout<<*i<<endl;

    abc obj;
    obj.a = 4; obj.b = 5;obj.c ='c';
    int *a1 = reinterpret_cast<int*>(&obj);
    cout<<*a1<<endl;
    int *b1 = reinterpret_cast<int*>(a1+1); // getting values of the memory bit by bit
    cout<<*b1<<endl;
}