#include<iostream>
#define null NULL
using namespace std;
class node{
public:
int data;
node *next;
node(int n){data=n;}
};
class LLstack{
public:
node *stack;
LLstack(){stack=null;}
LLstack(int a[],int n){
 stack=null;
 for(int i=0;i<n;i++)
  push(a[i]);
}
void push(int n){
node *temp=new node(n);
temp->next=stack;
stack=temp;
}
void pop(){
stack=stack->next;
}
bool is_empty(){return stack==null;}
int size()
{
  int c = 0;
   node *temp = stack;
   while(temp!=null)
   {
    c++;
    temp = temp->next;
   }
   return c;
}
void print(){
node *temp=stack;
while(temp!=null){
        cout<<temp->data<<"  ";
    temp = temp->next;
}
cout<<endl;
}
};
int main()
{
    int a[]={10,20,30,40};
    LLstack ll(a,4);
    ll.print();
    ll.pop();
    ll.push(24);
     ll.push(94);
     ll.push(44);
     ll.push(914);
         ll.pop();
    ll.pop();
    ll.pop();
    ll.print();
   ll.pop();
    ll.print();

    cout<<"Size of Stack :"<<ll.size()<<endl;
    node n(10);
    return 0;
}
