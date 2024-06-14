#include<string>
#include<iostream>

class Date
{
public:
    enum Month{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
    class Bad_date{};
    Date(int dd=0,Month mm=Month(0),int yy=0);

    //
    int Day()const;
    Month month()const;
    int year()const;
    std::string string_rep() const;
    void char_rep(char s[])const;

    static void set_default(int,Month,int);

    //

    Date& add_year(int n);
    Date& add_month(int n);
    Date& add_day(int n);

private:
        int d,m,y;
        static Date default_date;


};

void Date::set_default(int d, Date::Month mm, int y)
{

    std::cout<<"call set default"<<std::endl;

}

Date::Date(int d,Date::Month m, int y)
{

    std::cout<<" construt" <<std::endl;
}

int main(int arvn, char * arv[])
{

     Date today(1,Date::Month::dec,2099);
     Date yesteraday = today;
     Date tomorror = Date(2,Date::Month::jul,2049);

     today.set_default(10,Date::Month::jun,2017);


    return 0;

}