#include<iostream>
#include<list>
// #include<Date.h>s


using namespace std;

struct Employee
{
    /* data */
    string firs_name, family_name;
    char middle_initial;
    // Date hiring_date;
    short Department;

};

struct Manager_A
{
    /* data */
    Employee emp;
    list<Employee *> group;
    short level;
};

struct Manager_B:public Employee
{
    /* data */

    list<Employee *> group;
    short level;

};



void f(Manager_B ml, Employee el)
{
    list<Employee *> elist;
    elist.push_front((Employee *)&ml);
    elist.push_front(&el);

}

// 派生类指针可以显示转换为基本类指针，反正则不行
// 通过指针或者引用的方式，派生类的对象可以当做基本类的对象来处理。
void g(Manager_B mm, Employee ee)
{
    Employee *pe = &mm;
   // Manager_B *pm = &ee; // error

 //   pm->level = 2;   /// error

    Manager_B* pm = static_cast<Manager_B *>(pe);

    pm->level = 2;

    
}

int main(int garn, char * agar[])
{



    return 0;
}