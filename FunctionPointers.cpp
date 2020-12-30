#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

//passing function pointer to a function

void print (int (*fun)(int,int))
{
    cout<<fun(3,4)<<endl;
}

//returning function pointer from a function

typedef int (*returnfunc_p)(int,int);

returnfunc_p new_print()
{
    return add;
}

//returning function pointer from a function without using typedef

int (*returnfunc1_p())(int,int)
{
    return add;
}

int sub(int a, int b)
{
   return a-b;
}

int main()
{
   // int (*fun_p)(int,int) = add;// New compiler supports this
    int(*fun_p)(int,int) = &add;// old compiler supports this - preferred because it can be used in both old and new compilers
    cout<<fun_p(2,4)<<endl;
    cout<<(*fun_p)(2,4)<<endl;// above line and this line both does same job - different syntax
    print(fun_p); // passing function pointer
    returnfunc_p returnstore = new_print();
    cout<<returnstore(5,6)<<endl;
    returnfunc_p returnstore1 = returnfunc1_p();
    cout<<returnstore1(6,7)<<endl;
    // array of function pointers
    int (*arr[2])(int,int) = {add,sub};
    cout<<arr[1](7,8)<<endl;
    cout<<arr[0](7,8)<<endl;
    cout<<(*arr[1])(7,8)<<endl;
    cout<<(*arr[0])(7,8)<<endl;    
    

}