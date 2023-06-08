#include<iostream>
using namespace std;
int main(){
    long int n;
    cout<<"enter rupees :";
    cin>>n;
    int five =n/500;
    int hundred =(n%500)/100;
    int remain =(n%500)%100;
    int fifty = remain/50;
    int twenty =(remain%50)/20;
    int ten =((remain%50)%20)/10;
    int chiller =((remain%50)%20)%10;
    int fivech  =chiller/5;
    int two =(chiller%5)/2;
    int one =(chiller%5)%2;
    cout<<"500 = "<<five<<"\n100 = "<<hundred<<"\n50 = "<<fifty<<"\n20 = "<<twenty<<"\n10 = "<<ten<<"\n5 = "<<fivech<<"\n2 = "<<two<<"\n1 = "<<one;
}