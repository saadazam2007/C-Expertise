#include<iostream>
using namespace std;
int main(){
    char character = 'a';
    cout<<character<<endl;
/*ASCII VALUES
every single character is associated with a unique and specific 
ASCII value Like:
"a" = 97         "A" = 65              "0" = 48
"b" = 98         "B" = 67              "1" = 49
.                .                     .
.                .                     .
"z" = 122        "Z" = 90              "9" = 57
  */
//Character to ASCII value   
    char _1;
    cout<<"Enter any character : ";
    cin>>_1;
    cout<<"The ASCII value for the character "<<_1<<" is : "<<(int)_1<<endl;
//ASCII to character value
    int _2;
    cout<<"Enter any number: ";
    cin>>_2;
    cout<<"The ASCII value for the character "<<_2<<" is : "<<(char)_2;
}