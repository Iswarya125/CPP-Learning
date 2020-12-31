// 1. There are two places where we can apply templates.
//    a. function templates
//    b. class templates
// 2. Templates are the way to write generic programs.
// 3. The main point is we pass data type as parameter to function or class.

// compiler generates many different functions based on the datatypes of function call 
// It is done during compilation itself and syntax is checked for the given datatype.

#include <iostream>

template <typename T>
T getmax(T a,T b)
{
    return a>b?a:b;
}

template <typename Rt,typename T1,class T2>
Rt getmax1 (T1 a,T2 b)
{
    return a>b?a:b;
}

template <typename T1,typename T2>
auto getmax2(T1 a,T2 b)
{
    return a>b?a:b;
}

template <typename T1,typename T2>
auto getmax3(T1 a,T2 b)->decltype(a>b?a:b)
{
    return a>b?a:b;
}

int main()
{
    std::cout<<getmax(2,3)<<std::endl;
    std::cout<<getmax(3.0,4.5)<<std::endl;
    std::cout<<getmax<double>(3.0,4.5)<<std::endl; // here <double,double> - error because we declared one typename T so one type should be passed
    std::cout<<getmax1<double,double,int>(5.0,2)<<std::endl;
    std::cout<<getmax2(5.5,2)<<std::endl;
    std::cout<<getmax3(5.0,2)<<std::endl;

}