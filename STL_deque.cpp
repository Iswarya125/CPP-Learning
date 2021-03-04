// 0. std::deque is an indexed sequence container.
// 1. It allows fast insertion at both beginning and end.
// 2. Unlike vector elements of deque are not stored contiguous.
// 3. it uses individual allocated fixed size array, with additional bookkeeping, meaning index based access to deque
//    must perform two pointer dereference, but in vector we get in one dereference.
// 4. The storage of a deque is automatically expanded and contracted as needed.
// 5. Expansion of deque is cheaper than expansion of vector.
// 6. A deque holding just one element has to allocate its full internal array (e.g. 8 times the object size on 
//    64-bit libstdc++; 16 times the object size or 4096 bytes, whichever is larger, on 64-bit libc++).

// TIME COMPLEXITY:
// Random access - constant O(1)
// Insertion or removal of elements at the end or beginning - constant O(1)
// Insertion or removal of elements - linear O(n)


#include <iostream>
#include <deque>


int main()
{
    std::deque<int> d1 = {1,2,3,4,5};
    d1.pop_front();
    d1.push_back(6);
    d1.push_front(1);
    d1.push_front(0);
    for(auto &element : d1)
    {
        std::cout<<element<<std::endl;
    }
    return(0);
}