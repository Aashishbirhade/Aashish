#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number:";
    cin>>n;
    if(n>0){
        cout<<"Given number is positive : "<<n;
    }
    else if(n<0){
        cout<<"Given number is Negative : "<<n;
    }
    else{
        cout<<"Given no is zero : "<<n;
    }
}