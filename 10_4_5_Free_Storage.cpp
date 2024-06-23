#include<iostream>

using namespace std;


class Name{
  const char *name;

    // 
};

class Table
{
    Name *p;    
    size_t sz;
    public:
        Table(size_t s = 15){
             p = new Name[sz=s];
             cout<<"construct ---table"<<endl;

             };
        ~Table(){delete p;
            cout<<"destruct --- table"<<endl;
        };
        Name *lookup(const char *);
        bool insert(Name *p);
        // Table(){ std::cout<<"default construct"<<endl;} // is ambiguous construct functions

        Table(const Table &);
        Table& operator=(const Table &);


};

// the copy construct and initialize
Table::Table(const Table &t)
{
    p = new Name[sz = t.sz];
    for(size_t x=0; x < sz; x++)p[x] = t.p[x];


}

// copy assignment ,

Table& Table::operator=(const Table &t)
{
    if(this != &t)
    {
        delete p;
        p = new Name[sz = t.sz];
        for(int i=0;i<sz;i++)p[i]=t.p[i];
    }
    return *this;
}

// test   new and delete
int main(int argv, char *arg[])
{

    Table *p = new Table;
    Table *q = new Table;

    delete p;
    // delete q;
    delete q;


    std::cout<<"hello world;" << std::endl;

    return 0;
}