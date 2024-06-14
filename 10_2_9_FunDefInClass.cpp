class Date1
{
    public:
        int day()const {return d;};
    private:
        int d,m,y;
};

class Date
{
    public:
        int day()const;
    private:
        int d,m,y;
};

inline int Date::day()const{ return d;}