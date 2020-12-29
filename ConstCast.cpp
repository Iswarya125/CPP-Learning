//const_cast<T>(v)
//1. const_cast can be used to change the const or volatile qualifiers of pointers or references.
//Where T must be a pointer, reference, or pointer-to-member type.
// Use const_cast only when you have to.
// 2 Use const_cast only when the actual refereed object/variable is not const.
// 3 Use when we are dealing with 3'rd party library and some API want data in non-const form but we have it in const. (actually we can not do anything in that case, but make sure that API is not changing our variable value)
//Refer : https://www.geeksforgeeks.org/const_cast-in-c-type-casting-operators/

#include <iostream>
using namespace std;

int main()
{
    const int a =5;
    cout<<a<<endl;
    //const int *b = &a; - to introduce constness
    //const int *b = const_cast<const int*>(&a); - to introduce constness
    //*b =*b+1;
    

    //int &b = const_cast<int&>(a);   //reference in const cast and removal of constness
    //cout<<++b<<endl;

    const int* p = &a;
    int* c = const_cast<int*>(p);   // removing constness of the pointer results in modification of constant value 'a'
                                    // this does not result in compilation failure but it should not be done.
    *c = *c+1;
    cout<<*c<<endl;

}

