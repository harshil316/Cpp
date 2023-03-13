#include <iostream>
using namespace std;

class emp
{
    int salary, n,id;
    string name, address , post[5] = {"manager", "devloper", "hr", "superwiser"};
    long long contect_no;
    

public:
    void emp_detail();
    void emp_salary(int);
    void emp_report(int);
};
void emp ::emp_detail()
{
    cout << "\n Enter your name : ";
    cin >> name;

    cout << "\n Enter your Address : ";
    cin >> address
    cout << "\n Enter your emp_id : ";
    cin >> id;

    cout << "\n Enter your contect no : ";
    cin >> contect_no;

    cout << "\n Enter n : ";
    cin >> n;
}
void emp ::emp_salary(int hours)
{
    int a=0;
    if(hours >=40)
    {   
        a=hours-40;
        hours=40;
    }
    switch (n)
    {
         case 0:
              salary=hours*600;
              salary+=a*750;
              break;
         case 1:
              salary=hours*300;
              salary+=a*400;
              break;
         case 2:
              salary=hours*500;
              salary+=a*600;
              break;
         case 3:
              salary=hours*400;
              salary+=a*550;
              break;
    }
}
void emp::emp_report(int hours)
{      
    int pwd,count=3;
    do{  
   
           cout<<"\n Enter password : ";
           cin>>pwd;
           if(id==pwd)
           {
       
                cout << "\n\t\t\t\t\t ================================================";
	            cout << "\n\t\t\t\t\t             Employess Management System         ";
                cout << "\n\t\t\t\t\t ================================================";
                cout << "\n\t\t\t\t\t Name           :"<<name;
                cout << "\n\t\t\t\t\t Address        :"<<address;
                cout << "\n\t\t\t\t\t Id             :"<<id;
                cout << "\n\t\t\t\t\t Contact No     :"<<contect_no;
                cout << "\n\t\t\t\t\t Post           :"<<post[n];
                cout << "\n\t\t\t\t\t Working Hours  :"<<hours;
                cout << "\n\t\t\t\t\t Salary         :"<<salary;
                cout << "\n\t\t\t\t\t ================================================";
                break;
           }
           else
           {    count--;
               cout<<"wrong password........"<<count<<" attemp left...";
           }
    }while(count!=0);

}
 
int main()
{
    int hours,q;
    emp e1;
    e1.emp_detail();
    cout << "\n Enter your working hours : ";
    cin >> hours;
    e1.emp_salary(hours);

    cout << "\n\t\t\t\t\t --------------------------------------------------------";
	cout << "\n\t\t\t\t\t         Get Your Report Enter 1 either 0 :";cin>>q;
    cout << "\n\t\t\t\t\t --------------------------------------------------------";
   
    if(q==1)
    {
         e1.emp_report(hours);
    }
}
// cout << "\n Get Your Data Enter 1 either 0 : ";