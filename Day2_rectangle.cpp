#include<iostream>
using namespace std;

int main()
{
    int length,width;
    cout<<"enter Length and Width of rectangle"<<endl;
    cin>>length>>width;
    int ch;
    cout<<"if you want area of rectangle press 1 \nif you want Perimeter of rectangle press 2"<<endl;
    cin>>ch;
    if(ch==1){
         int area;
        area =length*width;
        cout<<"area of given rectangle is "<<area;
    }
    else{
         int perimeter;
        perimeter=2*(length+width);
        cout<<"Perimeter of given rectangle is "<<perimeter;
    }
}