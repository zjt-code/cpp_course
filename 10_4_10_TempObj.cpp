#include<iostream>
#include<string>

using namespace std;


void f(std::string &s1, std::string &s2, std::string &s3)
{

    // error
    // const char *cs = (s1+s2).c_str();
    // std::cout<< cs <<std::endl;

    std::string cs = (s1+s2);
    std::cout<< cs.c_str()<<std::endl;

}


void f2(string &s1, string &s2, string &s3)
{
    cout<< s1+s2 << endl;

    string s = s2+s3;

    if(s.length() < 8 && s[0] =='a')
    {

    }

}


void g(const string &s1, const string &s2){};
void h1(string &s1, string &s2)
{
    const string &s = s1+s2;
    string ss = s1+s2;
    g(s,ss);
}
int main(int agvn, char *grv[])
{

    std::cout<<" hello "<<std::endl;

    std::string s1 = std::string("123");
    std::string s2 = std::string("456");
    std::string s3 = std::string("789");


    f(std::string("123"),std::string("456"),std::string("789")); // value error
    f(s1,s2,s3); 


    return 0;

}