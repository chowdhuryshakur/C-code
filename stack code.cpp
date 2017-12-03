/*stack code*/
#include <iostream>
using namespace std;

class stack_{
  private:
       int top = -1;
       int a[10];
  public:
       void push(int n)
         { if(top<10){top++; a[top] = n;}
           else cout<<"stack is full"<<endl;}
       void pop()
         { if(top>-1){cout<<"remove "<<a[top]<<endl; top--;}
           else cout<<"empty stack"<<endl;}
       void view_top()
         {cout<<"Top is "<<top<<endl;}
       void view_stack()
          { if(top>-1)
             for(int i=0; i<=top; i++)
             cout<<a[i]<<endl;
            else cout<<"empty stack"<<endl;}
       };
int main()
{
  stack_ s;
   s.push(1);
   s.push(13);
   s.push(12);
   s.pop();
   s.push(16);
   s.push(11);
   s.pop();
   s.view_top();
   s.view_stack();
}
