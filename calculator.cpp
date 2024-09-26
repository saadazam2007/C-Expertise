#include<iostream>
using namespace std;
int main(){
    int a,b,add,sub,multi,remd;
    float div;
    cout<<"\n \t CALCULATOR";
    cout<<"\n \t ==========";
    cout<<"\n \t Enter the value of a .......";
    cin>>a;
    cout<<"\n \t Enter the value of b .......";
    cin>>b;
    add = a+b;
    cout<<"\n \t Addition of \t" << a << "\tand\t"<< b << "\tis\t" << add;
    sub = a-b;
    cout<<"\n \t Subtraction of \t" << a << "\tand\t"<< b << "\tis\t" << sub;
    multi = a*b;
    cout<<"\n \t Multition of \t" << a << "\tand\t"<< b << "\tis\t" << multi;
    div = a/b;
    cout<<"\n \t Division of \t" << a << "\tand\t"<< b << "\tis\t" << div;
    remd = a%b;
    cout<<"\n \t Remainder of \t" << a << "\tand\t"<< b << "\tis\t" << remd;
}