// POINTS:
// 1. There is no need to typecast implicit data types (Compile Knows How To Do That)
// 2. User defined data types needs this overloading (typecast overloading).

#include <iostream>

class Dollar
{
    public:
        Dollar() = default;
        Dollar(double d):dollar{d}{}
        void print()
        {
            std::cout<<"Dollar value is "<<dollar<<std::endl;
        }
    private:
        double dollar;

};


class Rupee
{
    public:
        Rupee(double r):rupee{r}{}
        void print()
        {
            std::cout<<"Rupee value is "<<rupee<<std::endl;
        }
        operator Dollar()
        {
            return (rupee/80);
        }
    private:
        double rupee;
};

int main()
{
    Rupee r(80);
    Dollar d;

    //d = r;
    d = static_cast<Dollar>(r);
    d.print();
    r.print();
}