#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int d;
    cout<<"Enter the value of int d"<<endl;
    cin>>d;
    cout<<"D = "<<d<<endl;

    float c;
    cout<<"Enter the vlue of float c"<<endl;
    cin>>c;
    cout<<"D = "<<c<<endl;

    char z;
    cout<<"Enter the character z"<<endl;
    cin>>z;
    cout<<"Z = "<<z<<endl;

    string g;
    cout<<"Enter your name"<<endl;
    cin>>g;
    cout<<"Name: "<<g<<endl;

    cout<<"Size of name: "<<sizeof(g)<<endl;
}