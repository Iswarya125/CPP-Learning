// STL - Standard Template Library
// It has 3 parts 1. containers 2.Iterators 3.Operators

// STL arrays :
// 1. std::array element when passed to another function - it is generally pass by value 
// 2. accessing elements can be done using [],at,front,back 
// 3. Other operations are also available
// 4. if out of bound element is accessed using [] - junk value will be shown but when at is used it gives exception.
// 5. Multiple members can be intialized in single line no need for loop
// 6. data method returns the address of the array
// 7. No Array decay problem in std::array as the size will not get lost using size() method we can always get the number of elements in the array.

#include <iostream>
#include <array>

int main()
{
std::array<int,5> a1{}; //uniform initialization
std::array<int,5> a2(a1);
std::array<int,5> a3;
std::array<int,5> a4;

a3.fill(10);
//updating array without loop
a1 = {1,2,3,4,5};
a4 = a3;

for(int i =0;i<5;i++)
{
    std::cout<< "a1["<<i<<"] is "<<a1[i]<<std::endl;
    std::cout<< "a2["<<i<<"] is "<<a2[i]<<std::endl;
    std::cout<< "a3["<<i<<"] is "<<a3[i]<<std::endl;
    std::cout<< "a4["<<i<<"] is "<<a4[i]<<std::endl;
}
std::cout<< "address of a1 is "<<a1.data()<<std::endl;
std::cout<< "address of a2 is "<<a2.data()<<std::endl;
std::cout<< "address of a3 is "<<a3.data()<<std::endl;
std::cout<< "address of a4 is "<<a4.data()<<std::endl;

return 0;
}



