#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x1,x2,y1,y2;
    cout<<"enter x1 and x2 : "<<endl;
    cin>>x1>>x2;
    cout<<"enter y1 and y3 : "<<endl;
    cin>>y1>>y2;
    float ans;
    ans = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout<<"Answer : "<<ans;

}