#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file1.txt");
    if(filestream.is_open())
    {
        filestream<<"welcome to skillqode";
        filestream<<"\nwe started new lab";
        filestream<<"\nwe started new branch";
        filestream.close();
    }
    else
        cout<<"file opening if fail.";
}