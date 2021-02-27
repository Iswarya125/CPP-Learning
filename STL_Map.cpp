// 1. std::map is associative container that store elements in key value combination
//    where key should be unique, otherwise it overrides the previous value.
// 2. It is implement using Self-Balance Binary Search Tree (AVL/Red Black Tree) .
// 3. It store key value pair in sorted order on the basis of key (assending/decending).
// 4. std::map is generally used in Dictionay type problems.

#include <iostream>
#include <map>
#include <string>
#include <functional>

int main()
{
    std::map<std::string,int,std::greater<std::string>> m1;
    m1["Apple"] = 12343453;
    m1["Bannana"]=87787868;
    m1["Cherry"]=983976;
    m1.insert(std::make_pair("Dog",34354));

    for(auto &i : m1)
    {
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }
    return(0);
}