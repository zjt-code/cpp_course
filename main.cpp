#include<iostream>



class Date{

    
    int d,m,y;  //default, private type
    public:
    void init(int dd,int mm,int yy);
    void add_year(int yy);
    void add_month(int mm);
    void add_day(int dd);

};


void Date::init(int dd,int mm,int yy)
{
    d = dd;
    m = mm;
    y = yy;
}


void timeswap(Date &d)
{
   // d.d -=200;  // private d, cann't access

}
int main()
{



    return 0;
}