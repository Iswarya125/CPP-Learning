// 1. In C++ it is possible to change the behavior of operators. (+,-,*....)
// 2. But we can change the behavior for user defined types (class, struct) only.

#include <iostream>
using namespace std;

class number
{   private:
        int x;
    public:
        number()
        {
            x = 10;
        }
        void operator &()
        {
            this->x = this->x + 5;
        }
        int get()
        {
            return this->x;
        }
};

int main()
{
    number num1;
    &num1;
    cout<<num1.get();
}