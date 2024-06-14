#include<iostream>
#include<string>

class Date
{

    // default private variabel

   
    bool cache_valid;
    std::string cache;
    void compute_cache_value();

public:
    int object_cnt;
     std::string string_rep()const;

     
     Date( int obj)
    {
      object_cnt = obj;  
    };

     Date(void){};
};


void Date::compute_cache_value()
{
    cache = "fshafhafka";

    std::cout<<"call compute_cache_value"<<std::endl;
}

 std::string Date::string_rep() const
{
    if( cache_valid == false)
    {
        Date *th = const_cast<Date *>(this);
        th->compute_cache_value();
        th->cache_valid=true;
    }

    return cache;

}



int main(int argn, char * argv[])
{


// std::cout<<"Hello world"<<std::endl;
    Date d1;
    const Date d2 = Date(2) ;

    std::string s1= d1.string_rep();
    std::string s2 = d2.string_rep();


// different running result gcc. msvc
    std::cout<< s1<< std::endl;
    std::cout<<"------"<<d1.object_cnt<< std::endl;
    std::cout<< s2 <<std::endl;
    std::cout<<""<<"------"<<d2.object_cnt<<std::endl;
    return 0;


}

// 总结在const 函数中试图改变变量的值会报错，如果使用const_cast<> 强制转换进行操作，会出现无法定义的结果