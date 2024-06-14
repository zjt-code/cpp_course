#include<iostream>


class Date
{

    int d,m,y;
    public:
    int a,b,c;

    int day()const{return d;}
    int month()const{return m;}
    int year()const;

    void add_year(int in){y+=in;}

};


// error
// inline int Date::year() 
// {
//        return 0;
// }



inline int Date::year() const
{
       return 0;
}


void f(Date &d, const Date &cd)
{

    d.year();
    d.add_year(2);

    cd.year();
    // cd.add_year(1);  // error

}


int main( int argn, char *argv[])
{

     for(int x=0; x<argn; x++)
     std::cout<<argv[x]<<std::endl;

        std::cout<<"hello world\r\n";
        std::cout<<"hello world\r\n";


    return 0;
}
