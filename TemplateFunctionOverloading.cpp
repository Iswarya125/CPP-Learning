#include <iostream>
using namespace std;

int max(int a,int b)
{
    cout<<"inside int function"<<endl;
    return a>b?a:b;
}

template <typename T>
T max(T a, T b)
{
    cout<<"inside TT function"<<endl;
    return a>b?a:b;
}

template<typename T>
T max(T a, T b, T c)
{
    cout<<"inside TTT function"<<endl;
    return max(max(a,b),c);
}

int main()
{
    //global scope
    ::max(2,4);
    ::max('a','b');
    ::max(3,4,5);
    ::max<>(2,4);
    //refers to std::max function
    cout<<max(1,2);
}
