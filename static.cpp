#include<iostream>
using namespace std;
class bank
{
    int accno,balance;
    string myname;
    public:
    static int count;
    bank(int accno,int balance,string myname)
    {
        this->accno = accno;
        this->balance = balance;
        this->myname = myname;
        count++;
    }
    void getdata()
    {
        cout<<"\n"<<myname<<" - "<<accno<<" - "<<balance;
    }
};
int bank::count;
int main()
{
    bank h(101,1500,"harshil"),u(102,170,"umang");
    h.getdata();
    u.getdata();
    cout<<" \n no. of accounts : "<<bank::count;
    return 0;
}