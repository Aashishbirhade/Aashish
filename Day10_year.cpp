#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter year:";
    cin>>n;
    if(n%4==0){
        cout<<"given year is leap";
    }
    else{
        cout<<" given year is not leap year";
    }

}