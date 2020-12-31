// 1. Some time we have to specialize template for a particular data type.
// 2. We can specialize both "function" and "class" template.

#include <iostream>
using namespace std;

template <typename T>
T add (T a, T b)
{
    cout<<"add function called"<<endl;
    return a+b;
}

//specialization template
template <>
char add (char a, char b)
{
    cout<<"add template specialization"<<endl;
    return a-b;
}

int main()
{
    add(1,3);
    add('c','d');
    return 0;
}