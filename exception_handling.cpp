#include<iostream>
using namespace std;
int main()
{
    int p,c,m,err=0;
    string name;
    do
    {
        try
        {
            cout<<"enter student name:"<<endl;
            cin>>name;
            cout<<"enter physics marks:"<<endl;
            cin>>p;

            if(!(p>=0 && p<=100))
            {
                throw(p);
            }
            cout<<"enter chemistry marks:"<<endl;
            cin>>c;
            if(!(c>=0 && c<=100))
            {
                throw(c);
            }
            cout<<"enter maths marks:"<<endl;
            cin>>m;
            if(!(m>=0 && m<=100))
            {
                throw(m);
            }
            err=0;
        }
        catch(int e)
        {
            cout<<"\n vaild marks!"<<endl;
            err=1;
        }
    }
    while(err);
}