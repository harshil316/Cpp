#include<iostream>
using namespace std;
class Bank
{
    int balance;
    public:
    Bank(int);
    void deposite(int);
    void withdraw(int);
    int showbalance();
};
Bank::Bank(int amt)
{
    balance = amt;
}
void Bank::withdraw(int amt)
{
    balance -=amt; 
}
void Bank::deposite(int amt)
{
    balance +=amt;
}
int Bank::showbalance()
{
    return balance;
}
int main()
{
    int dee_amt;
    Bank harshil(1000);
    cout<<"\n balance : "<<harshil.showbalance();
    harshil.deposite(300);
    cout<<"\n balance : "<<harshil.showbalance();
}