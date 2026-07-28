#include<iostream>
using namespace std;
int main()
{
    int num,reverse=0,rem,original;
    cout<<"enter number:";
    cin>>num;
    original=num;
    while(num!=0)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    if (original==reverse)
    cout<<"it is polindrom";
else
cout<<"not a polindrom";
}