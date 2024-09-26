#include<iostream>
using namespace std;
int main(){
    float x = 7.0/22.0;
    float y = 3.14 + 2;
    float z = 3.0/5.0;
    // cout<<x*y*z<<endl;
    // cout<<7.0/22.0*(3.14+2)*3.0/5.0<<endl;
    // cout<<7/22*(3.14+2)*3/5;
    // int ze = 6.6/9+2*2;
    // cout<<ze<<endl;
    float a = 5/2;
    float b = 5.0/2;
    float c = 5/2.0;
    float d = 5.0/2.0;
    float e = 2/7;
    float f = 2%7;//if a<b then the answer of modulus is "a"
    float g = 2%-7;//if a<-b then the answer of modulus is "a"
    float h = -2%7;//if -a<b then the answer of modulus is "-a"
    float i = 9%7;
    float j = 9%-7;//if (+a) and (-b) and a is greater than (-b) will be (b) 
    float k = -9%7;//if (-a) then answer will be -x where x is the remainder
    cout<<f<<endl<<g<<endl<<h<<endl<<i<<endl<<j<<endl<<k;
    }