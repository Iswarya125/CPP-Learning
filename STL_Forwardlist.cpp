// 1. This is single linked list what we know from C programming language.
// 2. Why forward_list why not single_list ?
// 3. We should use this class instead of traditional single linked list because
//    a. Well tested
//    b. Bunch of available function
// 4. Few Available Operations
//    operator =, assign, front, empty, max_size, clear, insert_after, emplace_after, reverse, sort, merge
//    splice_after, unique, remove, remove_if, resize

#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> list1 = {1,3,4,5,6,7,7};
    list1.insert_after(list1.begin(),{2});
    list1.sort(greater<>());

    for(auto &e : list1)
    {
        cout<<e<<endl;
    }
}