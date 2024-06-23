

namespace chonor
{

    class Date{ 
         int a,b,c;

    public:
         Date(int aa,int bb ,int cc)
         {
            a =aa;
            b =bb;
            c =cc;
         };

         Date(){};
    };
  

    int diff(Date &a, Date &b);
}


int chonor::diff(Date &a ,Date &b)
{

    std::cout<<" diff date a and date b"<<std::endl;

    return 0;

}