#include<iostream>
#include<list>

class Employee
{
    std::string first_name,family_name;
    short department;

    public:
        Employee(const std::string &n,int d);
};


Employee::Employee(const std::string &n, int d):first_name(n),department(d)
{
    
    std::cout<<" Employee construct"<<std::endl;
}

class Manager:public Employee
{
    std::list <Employee *> group;
    short level;

public:
    Manager(std::string &n, int d, int le);

};

Manager::Manager(std::string &n, int d ,int le):level(le),Employee(n,d)
{

    std::cout<<"Manager construct"<<std::endl;
};

// Manager::Manager(std:: &n ,int d, int l):level(l),family(n),department(d)
// {

// }

int main(int agrn, const char * agrv[])
{
    Manager *a = new Manager(std::string("fafjlafjlafj"),1,1);

    std::cout<<sizeof(short)<<std::endl;

    delete a;
    return 0;

}