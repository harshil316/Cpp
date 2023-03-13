#include<iostream>
using namespace std;
class car
{
    protected:
    int no;
    public:
    void set_no(int num)
    {
        no = sum;
    }
    int get_no()
    {
        return no;
    }
};
class kia : public car
{
    public:
    void letsstart()
    {
        cout<<"\n my registration no"<<no;
    }
};
int main()
{
    kia seltos;
    seltos.set_no(123);
    seltos.letsstart();
}