#include<iostream>
using namespace std;
{
    int longitude,latitude;
    public:
    loc()
    {
        longitude = 0;
        latitude = 0;
    }
    loc(int lg,int lt)
    {
        longitude = lg;
        latitude = lt;
    }
    void show()
    {
        cout<<"\n longitude :"<<longitude<<"";
        cout<<"\n latitude :"<<latitude<<"\n";
    }
    loc operator+(loc);
};
loc loc::operator+(loc op2)
{
    loc temp;
    temp.longitude = longitude + op2.longitude;
    temp.latitude = latitude + op2.latitude;
    return temp;
}
int main()
{
    loc op1(10,20),op2(5,30),ob3;
    ob1.show();
    ob2.show();
    ob3=ob1+ob2;
    ob3.show();
    return 0;
}