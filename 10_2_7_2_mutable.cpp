#include<string>
#include<iostream>



struct cache
{
    /* data */
    bool valid;
    std::string rep;
};


class Date
{
    cache *c;

    mutable bool cache_valid=false;   //务必给定初始值, 否则 gcc , msvC  运行效果不同
    mutable std::string cache;
    void compute_cache_value() const;  // 填充（mutable) 缓存

public:

    int obj_cnt;

    std::string string_rep()const;

    std::string string_rep_st()const;

    Date(int x){obj_cnt=x;};
    Date(){};

};


void Date::compute_cache_value() const
{

        cache = "FSDFSFS";
}

std::string Date::string_rep() const
{
    if(!cache_valid)
    {
        compute_cache_value();
        cache_valid = true;
    }
    else{std::cout<<"valid = true"<<std::endl;}

    return cache;
}


   
 std::string Date::string_rep_st()const
 {

    if(!c->valid)
    {
        compute_cache_value();
        c->valid = true;
    }
    
    return c->rep;

 }
int main(int argn, char * argv[])
{

    Date d3;
    const Date d4 = Date(4);


    // std::string d3_s = d3.string_rep();


    // std::cout<<d3_s.size() << std::endl;

    std::cout<< d3.string_rep()<< d3.obj_cnt<< std::endl;
    std::cout<< d4.string_rep()<< d4.obj_cnt<< std::endl;

    return 0;
}