#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter any value : ";
    cin>>a;
    if((a>=65 &&a<=90)||(a>=97&&a<=122)){
        cout<<"Given value is alphabet";
    }
    else if(a>=48 && a<=57){
        cout<<"Given value is numeric";
    }
    else{
        cout<<"Given value is symbol";
    }
}