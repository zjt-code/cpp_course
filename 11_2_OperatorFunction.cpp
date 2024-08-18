#include<iostream>

class complex{

double re, im;

public:
    complex(double r, double i):re(r),im(i){}
    complex operator + (complex);
    complex operator *(complex);   

};


int main(int agrn, char *agrv[])
{


    return 0;
}