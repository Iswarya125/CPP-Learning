//reference : https://www.geeksforgeeks.org/g-fact-35/
#include <iostream>

class complex
{
    public:
        complex()= default;
        complex(int r, int i=0):real{r},imaginary{i}{}
        void print()
        {
            std::cout<<"value is "<<real<<" and "<<imaginary<<std::endl;
        }

    private:
        int real;
        int imaginary;
};

int main()
{
    complex c1(3,4);
    complex c2;
    c2 = 5; 
    c1.print();
    c2.print();
}