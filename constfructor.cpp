#include<iostream>
using namespace std;
class con
{
    int n;
public:
    con()
    {
        cout<<"\n consfructor called ";
    }    
    con (int a)
    {
        n=a;
        cout<<"\n consfructor called ";
    }
};
int main()
{
    con c1(10),c2(20),c3(30);
}