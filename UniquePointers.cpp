// 0. unique_ptr is a class template.
// 1. unique_ptr is one of the smart pointer provided by c++11 to prevent memory leaks.
// 2. unique_ptr wraps a raw pointer in it, and de-allocates the raw pointer,
//    when unique_ptr object goes out of scope.
// 3. similar to actual pointers we can use arrow and * on the object of unique_ptr,  because it is overloaded in unique_ptr class.
// 4. When exception comes then also it will de-allocate the memory hence no memory leak.
// 5. Not only object we can create array of objects of unique_ptr.


#include <iostream>
#include <memory>

int main()
{
    int *f = new int(200);
    std::unique_ptr<int> p = std::make_unique<int>(10);
    std::unique_ptr<int>p1 = std::move(p);
    std::unique_ptr<int> p2 = std::make_unique<int>(100);//make_unique - provides exception safety
    std::unique_ptr<int> p3{new int(20)};
    std::unique_ptr<int> p4{f}; 
    std::unique_ptr<int> p5{f}; //p4 and p5 both are unique pointers but points to f
   // std::unique_ptr<int> p6 =new int(300); //Error
   std::unique_ptr<int> p6{new int(300)};

    std::cout<<p6.get()<<std::endl;
    std::cout<<p4.get()<<std::endl;
    std::cout<<p5.get()<<std::endl;
    std::cout<<*p3<<std::endl;
    std::cout<<p1.get()<<std::endl;
    std::cout<<(p==nullptr)<<std::endl;
    p1.swap(p2);
    std::cout<<*p<<std::endl;
    std::cout<<*p2<<std::endl;
    p1.reset();
    std::cout<<*p2<<std::endl;
    std::cout<<(p1==nullptr)<<std::endl;
    p4.release();
    std::cout<<(p5==nullptr)<<std::endl;
    return 0;
}