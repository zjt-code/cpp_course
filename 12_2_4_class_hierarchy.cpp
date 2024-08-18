
class Employee{/**** */};
class Manager:public Employee{/*********8 */};
class Director:public Manager{/*********** */};


class Temporary{/******** */};
class Secretary:public Employee{/********** */};
class Tsec:public Temporary,public Secretary{/****** */};
class Consulant:public Temporary,public Manager{/******* */};


int main(int agrn, const char * agrv[])
{

    return 0;
}