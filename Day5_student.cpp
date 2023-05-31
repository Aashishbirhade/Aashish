#include<iostream>
using namespace std;
int main(){
    char name[20];
    int total,roll,a,b,c,d,e,average;

    cout<<"enter your Name : ";
    cin>>name;
    cout<<"enter your Rollno : ";
    cin>>roll;
    cout<<"Enter English subject marks";
    cin>>a;
    cout<<"Enter  Marathi subject marks";
    cin>>b;
    cout<<"Enter Chemistry subject marks";
    cin>>c;
    cout<<"Enter Physics subject marks";
    cin>>d;
    cout<<"Enter Biology subject marks";
    cin>>e;
    total = a+b+c+d+e;
    average=total/5;
    float per =(total*100)/500;
    cout<<"\nStudent Details"<<endl;
    cout<<"   Name :"<<name<<endl;
    cout<<"   Roll No :"<<roll<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"English :    "<<a<<endl;
    cout<<"Marathi  :    "<<b<<endl;
    cout<<"Chemisry :    "<<c<<endl;
    cout<<"Physics  :    "<<d<<endl;
    cout<<"Biology  :    "<<e<<endl;
    cout<<"Total  :      "<<total<<endl;
    cout<<"Average  :    "<<average<<endl;
    cout<<"Percentage :  "<<per<<endl;
    cout<<"---------------------------";

}