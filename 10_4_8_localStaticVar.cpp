#include<iostream>

class Table
{
    private:
    int v;
    public:
    Table(int x ):v(x)
    {
        std::cout<<"construct = "<< x << std::endl;
    };

    ~Table()
    {
        std::cout<<"disconstruct  v ="<< v << std::endl;
    };
};


//

void fn(int x)
{

    static Table t1(1);

    if(x==1)
    {
        static Table t2(2);
    }
    else
    {

        static Table t3(3);
    }


}

int main(int argn, char *agrv[])
{

    fn(1);
    return 0;
}