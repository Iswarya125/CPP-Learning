// Smart pointers in c++ is basically a wrapper which wraps raw pointer and handles the life time of the object for you, means if there is no reference to the pointer it will delete it otherwise it will hold. There are basically three types of smart pointers. 
// TYPES:
// 1. unique_ptr
// 2. shared_ptr
// 3. weak_ptr
// And the basic job of smart pointer is, it actually makes sure that we don't have memory leaks. 


#include <iostream>

template<typename T>
class createSmartPointers
{
    public:
    createSmartPointers(T* pointer):data{pointer}{};
    ~createSmartPointers()
    {
        delete data;
    }
    T operator*()
    {
        return *data;
    }
    private:
    T* data;
};

int main()
{
    int* p = new int(10);
    createSmartPointers<int> obj = createSmartPointers<int>(p);
    std::cout<<*obj;
    return 0;
}