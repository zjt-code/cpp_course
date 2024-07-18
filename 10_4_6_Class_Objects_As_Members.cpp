#include<iostream>

using namespace std;


class Date{

public:
    Date(){ cout<<" date construct"<<endl;};
    ~Date(){ cout<<"Date destruct"<<endl;};
};


class Name{
  const char *name;

    // 
};

class Table
{
    Name *p;    
    size_t sz;
    public:
        Table(size_t s = 15)
        {
             p = new Name[sz=s];
             cout<<" construct ---table"<<endl;

        };
        
        ~Table()
        {
            delete p;
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

class Club{

        std::string name;
        Table members;
        Table officers;
        Date  founded;
public:
        Club(const std::string &n, Date fd);
        Club(){};
};

Club::Club(const std::string &n, Date fd)
: name(n),founded(fd)
{
        std::cout<<" club construct" <<endl;

}


/********10-4-6-1**** */ 
class X
{
public:
    enum{c1=7,c2=11,c3=13,c4=17};
    int ii;
    Club c;
    // Club &pc;

    //......

    // X(int i, const std::string &n, Date d, Club &c):ii(i),c(n,d),pc(c){};
    X(){};

};


class Person
{
    std::string name;
    std::string address;
    
    Person(Person &p);
    Person(const std::string &n, const std::string &a);
};

Person::Person(const std::string &n, const std::string &a)
:name(n),address(a)// Initialize 
{
    address = a;  // Assignment is not good ,

}
/****************************** */

/**********10.4.6.2,***** */
class Curious{

    public:
    static const int c1;
    //static int c2 = 11; // error
    const int c3 = 13;
    //  static const int c4 = f(6); //error 
    static int c4;  

    // static const float c5 = 7.0f;
};

 int Curious::c4 ;

 int const Curious::c1=10;
/************************ */

/************10.4.6.3*** copy member**********/

class Unique_handle{

    public:
    Unique_handle(const Unique_handle&);
    Unique_handle& operator =(const Unique_handle&);

    public:
    //
};

struct Y
{
    /* data */
    Unique_handle a;
};

/*************************/
int main(int argn, char *argv[])
{

   // Table myTab;

   /******* test 10.4.6.2  vareble*/
    Curious b,c; 

    std::cout<<b.c3<<std::endl;
    std::cout<<b.c1<<std::endl;
    std::cout<<b.c4<<std::endl;

    std::cout<<"addr b.c3:" <<&b.c3<<std::endl;
    std::cout<<"addr c.c3:" << &c.c3 <<std::endl;


    std::cout<<"addr b.c1:" <<&b.c1<<std::endl;
    std::cout<<"addr c.c1:" << &c.c1 <<std::endl;


    std::cout<<"addr b.c4:" <<&b.c4<<std::endl;
    std::cout<<"addr c.c4:" << &c.c4 <<std::endl;
    /*****************************end */

    X x;

    std::cout<<" x" <<x.c1<<std::endl;
   // Date mydate;
   // Club a("zhangjingtao",mydate);


  // test 10.4.6.3

    // Y y1;
    // Y y2 = y1;

    return 0;
}