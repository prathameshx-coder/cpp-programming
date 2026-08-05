#include<iostream>
using namespace std;
int main()
{
    double lenght,widht,area,perimeter;
    cout<<"enter the lenght of the rectangle:";
    cin; lenght;
    cout<<"enter the widht of the rectangle:";
    cin; widht;
    area=lenght*widht;
    perimeter=2*(lenght+widht);
    cout<<"\n---result---"<< endl;
    cout<<"area of the rectangle:"<<area<<endl;
    cout<<"perimeter of the rectangle:"<<perimeter<<endl;

}