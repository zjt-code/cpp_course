#include<iostream>

class Date
{

public:

    int j,k,b;
    Date();
    Date(int d,int m,int y);
    int year()const { return y;};
    int month()const { return m;};
    int day()const { return d;};
    void set_default(int dd,int mm,int yy);
    static void test();
    Date * Date_Get_Default()
    {
         return & default_date;
    };
    
private:
      int d,m,y;
      static Date default_date;
      static int abc;
};

 int Date::abc=0;
  Date Date::default_date(6,7,8);
// Date  default_date(1,2,3);

void Date::set_default(int dd,int mm,int yy)
{

   // if(abc > 0) std::cout<<" big than o"<<std::endl;

   default_date = Date(dd,mm,yy);

    // Date default_date();
    // y = yy;
    // m = mm;
    // d = dd;


}

Date::Date(int dd, int mm, int yy)
{

    // if(yy==0)yy= default_date.year();
    y = yy;
    m = mm;
    d = dd;


}
Date::Date()
{

}



void Date::test()
{

    std::cout<< Date::abc << std::endl;

}


int main(int garn, char *grv[])
{

    Date::test();
    // Date mydate = Date();

    Date mydate;
    // std::cout<< "yy = " << mydate.year() <<" mm = " << mydate.month() << " dd=" <<mydate.day()<<std::endl;

 



    Date *p_default = mydate.Date_Get_Default();
    std::cout<< "yy = " << p_default->year() <<" mm = " << p_default->month() << " dd=" <<p_default->day()<<std::endl;

    std::cout<< "yy = " << mydate.year() <<" mm = " << mydate.month() << " dd=" <<mydate.day()<<std::endl;
  

    return 0;
}