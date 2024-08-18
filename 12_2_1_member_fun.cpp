#include<iostream>

using namespace std;

class Employee
{
    string first_name,family_name;
    char middle_intial;

    public:
        void print() const;
        string full_name()const{

            return first_name + " " + middle_intial + " " + family_name;
        }
    
};


void Employee::print()const
{
    cout<<"name is " << full_name()<<endl;

}

class Manager:public Employee
{
private:
    /* data */
public:
    void print()const;

};


void Manager::print()const
{
    cout<<" call Ma print" << endl;
    Employee::print();
}


int main(int agrn ,char *agrv[])
{

    Manager a;

    a.print();

// Employee::print();

    return 0;

}