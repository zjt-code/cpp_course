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
// construct ,, destruct

void f(int i)
{
    Table aa(10);
    Table bb(15);

    std::cout<<"size bb "<<sizeof(bb)<<endl;
    std::cout<<"size aa "<<sizeof(aa)<<endl;
    if(i >0)
    {
        Table cc(3);
        std::cout<<"size aa "<<sizeof(cc)<<endl;
        // 
    }

    Table dd(33);

}


//  test copy initialize, and  copy assignment

void h()
{
    Table t1;
    Table t2 =t1;   //copy to initialize,,bad
    Table t3 ;   

     t3 = t2;   //  copy assignment,  bad

}


int main(int argn, char * argv[])
{


   // f(3);

    h();

    return 0;
}