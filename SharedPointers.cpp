// 0. shared_ptr is a smart pointer which can share the ownership of object (managed object).
// 1. Several shared_ptr can point to the same object (managed object).
// 2. It keep a reference count to maintain how many shared_ptr are pointing to the same object.
//    and once last shared_ptr goes out of scope then the managed object gets deleted.
// 3. shared_ptr is threads safe and not thread safe. [what is this??]
//    a. control block is thread safe
//    b. managed object is not
// 4. There are three ways shared_ptr will destroyed managed object.
//    a. If the last shared_ptr goes out of scope.
//    b. If you initialize shared_ptr with some other shared_ptr.
//    c. If you reset shared_ptr.
// 5. Reference count doesn't work when we use reference or pointer of shared_ptr.


#include <iostream>
#include <memory>

int main()
{
    std::shared_ptr<int> p{new int(20)};
    std::shared_ptr<int> p2 = std::make_shared<int>(10); //for expection safety
    std::cout<<p.use_count()<<std::endl;
    std::shared_ptr<int> p1=p;
    std::cout<<p.use_count()<<std::endl;
    std::shared_ptr<int>&p_ref = p; // no increment in count when reference is created 
    std::cout<<p.use_count()<<std::endl;
    std::shared_ptr<int> *ptr = &p; // no increment in count when another pointer is assigned using address of operator
    std::cout<<p.use_count()<<std::endl;
    std::cout<<p.get()<<std::endl;
    p.reset();
    std::cout<<p.use_count()<<std::endl;
    std::cout<<p.get()<<std::endl;
}