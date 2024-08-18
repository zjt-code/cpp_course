#include<iostream>
#include<chrono>
#include<list>


struct  Employee
{
    enum Empl_type{M,E};
    Empl_type type;
    Employee():type(E){};
    std::string first_name,family_name;
    char middle_initial;

    //std::Date hiring_date;
    short department;
    /* data */
};

struct Manager:public Employee
{
     Manager(){type = M;};

    std::list <Employee*> group;
    short level;    
    /* data */
};

void print_employee(const Employee *e)
{

    switch (e->type)
    {
    case Employee::M:
        /* code */
        std::cout<<e->family_name<<"\r\n"<<e->department<<std::endl;
        break;
    case Employee::E:
        {
            std::cout<<e->family_name<<"\r\n"<<e->department<<std::endl;
            const Manager *p = static_cast< const Manager *>(e);
            std::cout<<"level = "<< p->level<<std::endl;
        }
        break;   
    default:
        break;
    }
};



void print_list(const std::list<Employee*> &list)
{

    for(std::list<Employee *>::const_iterator p=list.begin(); p!=list.end();p++)
    {
        print_employee(*p);
    }

}


int main(int agv, const char *agrv[])
{
 return 0;
}