#include<iostream>
using namespace std;
class con
{
public:
    con(int a,int b)
    {
        cout<<"\n a: "<<a;
        cout<<"\n b: "<<b;
    }
    con(int a)
    {
        cout<<"\n int a: "<<a;
    }    
    con(char a)
    {
        cout<<"\n char a: "<<a;
    }
};
int main()
{
    con c1(10,20),c2('A');
}