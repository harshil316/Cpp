#include<iostream>
#include<string>
using namespace std;
class food
{
    int n,i;
    public:
    void menu();
    void order();
};
void food::menu()
{
    cout<<"\n__________BROWN DOSA___________";     cout<<"\t\t__________BROWN DOSA__________";   cout<<"\t\t=========================";    cout<<"\t\t========================";
    cout<<"\n-------------------------------";     cout<<"\t\t------------------------------";   cout<<"\t\t_TODAY'S SPECIAL DISCOUNT";    cout<<"\t\t_____OUR SPECIALITY_____";
    cout<<"\n|No.|     |MENU|        |PRICE|";     cout<<"\t\t|NO.|       MENU         PRICE";   cout<<"\t\t-------------------------";    cout<<"\t\t------------------------";
    cout<<"\n|1|      SIMPLE PAPER     40.00";     cout<<"\t\t| 11|    BUTTER MILK     20.00";   cout<<"\t\t________30% OFF__________";    cout<<"\t\t NO GST FOR.....";
    cout<<"\n|2|      BUTTER PAPER     50.00";     cout<<"\t\t| 12|    SOSYO           25.00";   cout<<"\t\t6.     JINI ROL    112.00";    cout<<"\t\t        BILLS OVER......";
    cout<<"\n|3|      GARLIC PAPEA     70.00";     cout<<"\t\t| 13|    COCA COLA       25.00";   cout<<"\t\t10.   PIZZA DOSA   140.00";    cout<<"\t\t                    1000";
    cout<<"\n|4|      MAISUR PAPER    120.00";     cout<<"\t\t| 14|    THUMS UP        25.00";                                             cout<<"\t\t========================";
    cout<<"\n|5|      GOTALO          140.00";     cout<<"\t\t------------------------------";
    cout<<"\n|6|      JINI ROL        160.00";
    cout<<"\n|7|      PALAK ROL       160.00";
    cout<<"\n|8|      SPRING ROL      170.00";
    cout<<"\n|9|      SWEETCORN ROL   180.00";
    cout<<"\n|10|     PIZZA DOSA      200.00";
    cout<<"\n-------------------------------";  
                                                                               cout<<"\n||--FOR CONFERMING ORDER PRESS 0--||";
}
void food::order()
{
    int qty,price,total=0,dis,gst=0,netamt=0;
    string name;
    cout<<"\nenter name:";
    getline(cin,name);
    for(i=1;i<15;i++)
    {
        cout<<"\n\nenter n:";
        cin>>n;
        if(n!=0)
        {
            cout<<"\nenter qty:";
            cin>>qty;
        }
        if(n==1)
        {
            cout<<"\nyour choise is SIMPLE PAPER";
            price=qty*40;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==2)
        {
            cout<<"\nyour choise is BUTTER PAPER";
            price=qty*50;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==3)
        {
            cout<<"\nyour choise is GARLIC PAPER";
            price=qty*70;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==4)
        {
            cout<<"\nyour choise is MAISUR PAPER";
            price=qty*120;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==5)
        {
            cout<<"\nyour choise is GOTALO";
            price=qty*140;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==6)
        {
            cout<<"\nyour choise is JINI ROL";
            price=qty*160;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==7)
        {
            cout<<"\nyour choise is PALAK ROL";
            price=qty*160;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==8)
        {
            cout<<"\nyour choise is SPRING ROL";
            price=qty*170;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==9)
        {
            cout<<"\nyour choise is SWEETCORN ROL";
            price=qty*180;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==10)
        {
            cout<<"\nyour choise is PIZZA DOSA";
            price=qty*200;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==11)
        {
            cout<<"\nyour choise is BUTTER MILK";
            price=qty*20;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==12)
        {
            cout<<"\nyour choise is SOSYO ";
            price=qty*25;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==13)
        {
            cout<<"\nyour choise is COCA COLA";
            price=qty*25;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==14)
        {
            cout<<"\nyour choise is THUMS UP";
            price=qty*25;
            cout<<"\nyour price is:"<<price;
        }
        else if(n==0)
        {
            break;
        }
        else
        {
            cout<<"\n\n WRONG CHOISE"; 
        }
        total+=price;
    }
    dis=(total*10)/100;
    if(total<1000)
    {
    gst=(total*18)/100;
    }
    netamt=(total-dis)+gst;
    cout<<"\n\n ================================";
    cout<<"\n"<<name;
    cout<<"\n TOTAL AMOUNT IS:"<<total;
    cout<<"\n DIS:"<<dis;
    cout<<"\n GST:"<<gst;
    cout<<"\n\n YOUR BILL IS:"<<netamt;
    cout<<"\n **********************************";
    cout<<"\n --||THANKS FOR VISITING||--";
    cout<<"\n ==================================";
}
int main()
{
    food v;
    v. menu();
    v. order();
}