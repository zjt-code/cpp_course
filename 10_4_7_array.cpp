#include<iostream>
#include<vector>


class Table
{
    static int con_cnt;
public:
    Table()
    {
        std::cout<<"construtct --"<< con_cnt++<<std::endl;
    };
    ~Table()
    {
        std::cout<<"disconstrict---"<<--con_cnt<<std::endl;
    };


};
int Table::con_cnt =0;


void fn(int sz)
{
    Table *t1  = new Table;
    Table *t2  = new Table[sz];
    Table *t3 =  new Table;
    Table *t4 =  new Table[sz];

    delete t1;
    delete[] t2;
    delete t3;
    delete[] t4;

}


void g()
{
    std::vector<Table> *p1 = new std::vector<Table>(10);

    Table * p2 = new Table;


    delete p1;
    delete p2;

}

int main(int argn, char *argv[])
{


    Table tab[10];

    fn(10);

    std::cout<<"hello worldl lll"<<std::endl;
    return 0;
}
