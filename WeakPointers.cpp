// 0. If we say unique_ptr is for unique ownership and shared_ptr is for shared ownership then
//    weak_ptr is for non-ownership smart pointer.
// 1. It actually reference to an object which is managed by shared_ptr.
// 2. A weak_ptr is created as a copy of shared_ptr.
// 3. We have to convert weak_ptr to shared_ptr in order to use the managed object.
// 4. It is used to remove cyclic dependency between shared_ptr.

#include <iostream>
#include <memory>

int main()
{
std::shared_ptr<int> p1{std::make_shared<int>(10)};
std::weak_ptr<int> p2 = p1;

std::cout<<p1.use_count()<<std::endl;// no increment in count when assigned to weak pointer
std::shared_ptr<int>p3{p2}; 
std::cout<<p1.use_count()<<std::endl; //increment in count when weak pointer assigned to another shared pointer
p2=p1;  // shared to weak - no increment weak to shared - increments the reference counter
std::cout<<p1.use_count()<<std::endl;
}
