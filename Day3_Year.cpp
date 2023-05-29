#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter value in days";
    cin>>a;
    int Y,W,D;
    
    Y=a/365;
    W=(a%365)/7;
    D=(a%365)%7;
     cout<<"Year = " <<Y<<endl;
     cout<<"Week = " <<W<<endl;
     cout<<"Day = " <<D;

}
   
