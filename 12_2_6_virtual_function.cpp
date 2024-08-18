#include<iostream>
#include<list>

class Employee{

    std::string first_name,family_name;
    short department;

    public:
         Employee(std::string &n, int d);
        virtual void print()const;

        void new_print();
};


Employee::Employee(std::string &n, int d):first_name(n),department(d)
{};

void Employee::print()const
{
    // std::cout<<"First name " << first_name << "" << family_name<< std::endl;

        std::cout<<" Employee print->"<<first_name<< "department = "<< department<<std::endl;
  

};

void Employee::new_print(void)
{

     std::cout<<"employee new_print"<<std::endl;

}

class Manager:public Employee
{
     std::list< Employee *>group;
     int level;
public:
    Manager(std::string &n, int d, int l):level(l),Employee(n,d){};

    void print() const;

};

void Manager::print()const
{
    std::cout<<"Manager Print--level= " << level <<std::endl;
        Employee::print();
    //  return 0;
};


void print_list(std::list<Employee *> &e)
{
    for(std::list<Employee *>::const_iterator p = e.begin(); p!= e.end(); p++)
    {
        (*p)->print();
    }

}
int main(int argn, const char * agrv[])
{

    Employee e(std::string("jing"),30);

    Manager m( std::string("zhang"),3,10);

    m.print();
    
   // m.print();
    // a.print();
   // a.new_print();
    //  Employee *p = static_cast< Employee *> (&m); // 派生类对象指针可以显示转换为基类指针，反之则不行
    //  p->print();


    std::list<Employee *> empl;
    empl.push_front(&e);
    empl.push_front(&m);

    print_list(empl);


    return 0;
}

