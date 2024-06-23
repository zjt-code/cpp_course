#include<iostream>


class Name{

    public:
   
    const char *name;

    // 
};

class Table
{
    Name *p;
    
    size_t sz;
    public:
        Table(size_t s = 15){ p = new Name[sz=s];};
        ~Table(){delete p;};
        Name *lookup(const char *);
        bool insert(Name *p);

};

struct X
{
        const int a;
     int &b ;

   
    /* data */
};

int main(int argv, char *gar[])
{
    Table tt;
    Name aa;

    // X x;
    
    std::cout<<aa.name<<std::endl;

    return 0;
}