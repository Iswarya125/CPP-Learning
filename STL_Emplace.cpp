// 1. All the containers supports insert and emplace operation to store data. 
// 2. Emplace is used to construct object in-place and avoids unnecessary copy of objects.
// 3. Insert and Emplace is equal for premetive data types but when we deal with heavy objects
//    we should use emplace if we can for efficiency.

#include <iostream>
#include <set>

class A
{
    public:
    int x;
    A(int y){x=y;std::cout<<"Inside constructor"<<std::endl;}
    A(const A& a){std::cout<<"Inside copy"<<std::endl;}

    bool operator < (const A& rhs) const
    {
        return(x < rhs.x);
    }
};

int main()
{
    A obj(10);
    std::set<A> s1;
    s1.insert(obj);
    s1.emplace(10);
    
    for(auto &element : s1)
    {
        std::cout<<element.x<<std::endl;
    }
}

