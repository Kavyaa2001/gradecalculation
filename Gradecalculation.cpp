#include<iostream>
using namespace std;
int main()
{
    int i;
    float mark,sum=0,avg;
    cout<<"Enter Marks obtained in 5 Subjects: ";
    for(i=0; i<5; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/5;
    cout<<"\nGrade = ";
    if(avg>=81 && avg<=100)
        cout<<"A";
    else if(avg>=61 && avg<80)
        cout<<"B";
    else if(avg>=41 && avg<60)
        cout<<"C";
    else if(avg>=21 && avg<40)
        cout<<"D";
    else if(avg<21)
        cout<<"E";
    else
        cout<<"Invalid Input";
    cout<<endl;
    return 0;
}
