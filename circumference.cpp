#include<iostream>
using namespace std;
int main()
{
    double pi=3.14159;
    double radius , area, circumference;
    cout<<"enter the readius of the circle:";
    cin>> radius;
    area=pi*radius*radius;
    circumference=2*pi*radius;
    cout<<"area of the circle:"<<area<<endl;
    cout<<"circumference of the circle:"<<circumference<<endl;
}