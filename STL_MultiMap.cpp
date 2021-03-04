// 1. Multimap is an associative container that contains a sorted list of key-value pairs, 
//    while permitting multiple entries with the same key.
// 2. It store key value pair in sorted order on the basis of key (assending/decending).
// 3. Data structure used in multimap is not defined by standard, but red-black tree is assumed by most of the people.
// 4. Lookup: count, find, contains (available in c++20), equal_range, lower_bound, upper_bound
// 5. We dont have at() and [] functions to get element like we had in std::map.


#include <iostream>
#include <map>
#include <string>
#include <functional>

int main()
{
    std::multimap<std::string,int,std::greater<std::string>> m1;
    m1.insert(std::pair<std::string,int>("apple",12343453)) ;
    m1.insert(std::pair<std::string,int>("apple",12343453)) ;
    m1.insert(std::pair<std::string,int>("apple",12343453)) ;
    m1.insert(std::pair<std::string,int>("Bannana",87787868));
    m1.insert(std::pair<std::string,int>("Cherry",983976)) ;
    m1.insert(std::make_pair<std::string,int>("Dog",34354));

    for(auto &i : m1)
    {
        std::cout<<i.first<<" "<<i.second<<std::endl;
    }

    std::cout<<std::endl;
    std::cout<<m1.count("apple")<<std::endl;
    std::pair<std::multimap<std::string,int>::iterator,std::multimap<std::string,int>::iterator> var1 = m1.equal_range("apple");
    //auto var1 = m1.equal_range("apple");
    std::cout<<"Range of apple is "<<std::endl;
    for(auto iterator = var1.first; iterator != var1.second; iterator++)
    {
        std::cout<<iterator->first<<" "<<iterator->second<<std::endl;
    }

    //find can return any one pair
    auto pair1 = m1.find("apple");
    std::cout<<pair1->first << " " << pair1->second<<std::endl;
}