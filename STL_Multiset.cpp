// 1. std::multiset is an Associative Container that contains a sorted set of duplicate objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logarithmic complexity.
// 4. If we want to store user defined data type in multiset then we will have to provide 
//    compare function so that multiset can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.

// BOTTOM LINE:
// multiset is similar to set except it can have multiple elements with same value.


#include <iostream>
#include <set>
#include <functional>
#include <string>

class person
{
    public:
    
    int age;
    std::string name;   
    bool operator < (const person& rhs) const
    {
        return age < rhs.age;
    }

    bool operator > (const person& rhs) const
    {
        return age > rhs.age;
    }
};

int main()
{
    std::multiset<int> a2 = {1,2,3,4,5,6,7,1,3,4,5,6,7,8};
    std::multiset<person> p1 = {{22,"Person1"},{33,"person2"},{44,"person3"}};
    std::multiset<person,std::greater<person>> p2 = {{22,"Person1"},{33,"person2"},{44,"person3"}};
    for(auto &element : a2)
    {
        std::cout<<element<<std::endl;
    }

    for(auto &p : p1)
    {
        std::cout<<p.age<<" "<<p.name<<std::endl;
    }

    for(auto &p : p2)
    {
        std::cout<<p.age<<" "<<p.name<<std::endl;
    }
   return 0; 
}