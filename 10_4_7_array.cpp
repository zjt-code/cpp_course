#include<iostream>



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

int main(int argn, char *argv[])
{


    Table tab[10];

    return 0;
}