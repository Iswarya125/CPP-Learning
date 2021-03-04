#include <iostream>
#include <vector>
#include <forward_list>

int main()
{
    std::vector<int> v1 = {1,2,3,4,5,6,7};
    std::forward_list<int> list1 = {3,4,6,3,2};
    auto func = [](int i)
    {
        return i*2;
    };
    
    for(auto &element : v1)
    {
        std::cout<<func(element)<<std::endl;
    }

    return(0);
}