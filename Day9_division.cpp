#include<iostream>
using namespace std;
int main(){
    int n;
    float div;
    cout<<"enter any number:";
    cin>>n;
    if(n%5==0){
        div=n/5;
        cout<<"number is divisible by 5\nDivision = "<<div;
        

    }
    else if(n%11==0){
         div=n/11;
        cout<<"number is divisible by 11\nDivision = "<<div;
    }
    else {

        cout<<"Given no is not divisible by 5 and 11 ";
    }
}