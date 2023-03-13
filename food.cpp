#include<iostream>
using namespace std;
int main()
{
    int pizza=350 , burger=200 , pasta=250 , cocacola=100 , choice;
    cout<<"\t\t__________________|dhaduk restaurant|___________________\n\n";
    cout<<"\npress 1 to buy pizza";
    cout<<"\npress 2 to buy burger";
    cout<<"\npress 3 to buy pasta";
    cout<<"\npress 4 to buy cocacola";
    cout<<"\npress to buy choice = ";
    cin>>choice;
    if(choice==1)
    {
        int quantity;
        cout<<"\t\t________________|pizza deal = 350Rs/only|_________________\n\n";
        cout<<"how many quantity you want to buy : ";
        cin>>quantity;
        int price = quantity*pizza;
        int gst = (price*15)/100;
        int net = price + gst;
        cout<<"\t\t_________________|bill|__________________\n\n";
        cout<<"\nthe price of pizza is = "<<price;
        cout<<"\nthe 15% additional charges are = "<<gst;
        cout<<"\nthe net amount is = "<<net;
        cout<<"\t\t_________________|thank you|__________________\n\n";
    }
    else if(choice==2)
    {
        int quantity;
        cout<<"\t\t________________|burger deal = 200Rs/only|_________________\n\n";
        cout<<"how many quantity you want to buy : ";
        cin>>quantity;
        int price = quantity*burger;
        int gst = (price*15)/100;
        int net = price + gst;
        cout<<"\t\t_________________|bill|__________________\n\n";
        cout<<"\nthe price of burger is = "<<price;
        cout<<"\nthe 15% additional charges are = "<<gst;
        cout<<"\nthe net amount is = "<<net;
        cout<<"\t\t_________________|thank you|__________________\n\n";
    }
    else if(choice==3)
    {
        int quantity;
        cout<<"\t\t________________|pasta deal = 250Rs/only|_________________\n\n";
        cout<<"how many quantity you want to buy : ";
        cin>>quantity;
        int price = quantity*pasta;
        int gst = (price*15)/100;
        int net = price + gst;
        cout<<"\t\t_________________|bill|__________________\n\n";
        cout<<"\nthe price of pasta is = "<<price;
        cout<<"\nthe 15% additional charges are = "<<gst;
        cout<<"\nthe net amount is = "<<net;
        cout<<"\t\t_________________|thank you|__________________\n\n";
    }
    else if(choice==4)
    {
        int quantity;
        cout<<"\t\t________________|cocacola deal = 100Rs/only|_________________\n\n";
        cout<<"how many quantity you want to buy : ";
        cin>>quantity;
        int price = quantity*cocacola;
        int gst = (price*15)/100;
        int net = price + gst;
        cout<<"\t\t_________________|bill|__________________\n\n";
        cout<<"\nthe price of cocacola is = "<<price;
        cout<<"\nthe 15% additional charges are = "<<gst;
        cout<<"\nthe net amount is = "<<net;
        cout<<"\t\t_________________|thank you|__________________\n\n";
    }
    else 
    {
        cout<<"sorry the item you have selected is not exist in our menu";
    }
}