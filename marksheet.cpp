#include<iostream>
using namespace std;
class skillqode{
    int s,g,e,h,total,per,grade;
    public:
    void getdata()
    {
        cout<<"\nenter marks for s g e h: ";
        cin>>s>>g>>e>>h;
    }
    void calc()
    {
        total=s+g+e+h;
        per=total/4;
    }
    void printdata()
    {
            cout<<"\n total :"<<total;
            cout<<"\n percentage :"<<per;
    }    
};
int main()
{
    int i;
    skillqode student[10];
    for(i=0;i<4;i++)
    {
        student[i].getdata();
        student[i].calc();
    }
    for(i=0;i<4;i++)
    {
        student[i].printdata();
    }
}