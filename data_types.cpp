//NAME: Saraswathi S
//PRN: 22070123102
//Exp-2

//Program-1
#include<iostream>
#include<string>
using namespace std;

int main() {
    int a;
    cout<<"Enter any integer: ";
    cin>>a;
    cout<<"Integer = "<<a<<" and size is "<<sizeof(a)<<" bytes"<<endl;

    float b;
    cout<<"Enter any number with decimal: ";
    cin>>b;
    cout<<"Float = "<<b<<" and size is "<<sizeof(b)<<" bytes"<<endl;

    string c;
    cout<<"Enter any word: ";
    cin>>c;
    cout<<"Srting = "<<c<<" and size is "<<sizeof(c)<<" bytes"<<endl;

    double d;
    cout<<"Enter any number with bigger decimal: ";
    cin>>b;
    cout<<"Double = "<<d<<" and size is "<<sizeof(d)<<" bytes"<<endl;

    char e;
    cout<<"Enter any character: ";
    cin>>e;
    cout<<"Character = "<<e<<" and size is "<<sizeof(e)<<" bytes"<<endl;

    bool f;
    cout<<"Enter True/False: ";
    cin>>boolalpha;
    cin>>f;
    cout<<"Boolean = "<<f<<" and size is "<<sizeof(f)<<" bytes"<<endl;

    return 0;
}

/*OUTPUT
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp2_1.cpp -o exp2_1 } ; if ($?) { .\exp2_1 }
Enter any integer: 109
Integer = 109 and size is 4 bytes
Enter any number with decimal: 2.65
Float = 2.65 and size is 4 bytes
Enter any word: moveee
Srting = moveee and size is 24 bytes
Enter any number with bigger decimal: 3.928163726
Double = 1.7932e-307 and size is 8 bytes
Enter any character: @
Character = @ and size is 1 bytes
Enter True/False: true
Boolean = 1 and size is 1 bytes */
