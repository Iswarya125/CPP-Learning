// 0. std::queue class is a container adapter that gives the programmer the functionality of a queue
// 1. queue is FIFO (first-in, first-out) data structure.
// 2. std::queue provides only specific set of functions.
// 3. std::queue allows to push(insert) at back and pop(remove) from front.
// 4. std::queue gives front, back, push, pop, empty, size.

#include <iostream>
#include <queue>

int main()
{
    std::queue<int> q1;
    q1.push(2);
    q1.push(3);
    q1.push(4);

    if(!q1.empty())
    {
        std::cout<<q1.front()<<std::endl;
        q1.pop();
        std::cout<<q1.front()<<std::endl;
        q1.pop();
        std::cout<<q1.front()<<std::endl;
        q1.pop();
    }
}