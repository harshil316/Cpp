#include<iostream>
using namespace std;
class bank
{
    protected:
    int accno;
    public:
    void acc_no(int num)
    {
        accno=num;
    }
    int getacc_no()
    {
        return accno;
    }
};
class saving_account:publi bank
{
    int bal,dep,with;
    public:
    saving_account(int amt)
    {
        bal=amt;
    }
    void acc_no4()
    {
        cout<<"\n your account no:"<<accno;
    }
    void deposit(int dep)
    {
        bal+=dep;
    }
    void withdraw(int with)
    {
        bal-=with;
    }
    int showbal()
    {
        return bal;
    }
};
int main()
{
    int dep,with,n;
    int accno;
    saving_account harshil(10000);
    harshil.acc_no(12345678);
    harshil.acc_no4();

    cout<<"\n if you enter dep amt: 'press 1'";
    cout<<"\n if you enter withdraw amt: 'press 2'";
    cout<<"\n if you show balance: 'press 9'";
    cout<<"\n if you exit: 'press 0'";

    do
    {
        cout<<"\n enter n:";
        cin>>n;
        switch(n)
        {
            case 0: 
                break;
            case 1:
                cout<<"\n enter deposit:";
                cin>>dep;
                harshil.deposit(dep);
                break;
            case 2:
                cout<<"\n enter withdraw:";
                cin>>with;
                harshil.withdraw(with);
                break;
            case 9:
                cout<<"\n balance:"<<harshil.showbal();
                break;    
            default:
                cout<<"\n wrong choise";
        }
    }while (n!=0);
}