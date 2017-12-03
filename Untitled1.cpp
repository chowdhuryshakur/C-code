#include <bits/stdc++.h>
using namespace std;
class stack_{
private:
    int top = -1;
    int sta[10];
public:
    void push(int a){
    if(top<10)
        {top++;
         sta[top] = a;
        }
    else cout<<"The stack is full."<<endl;}

    void pop(){
    if(top>-1)
        {cout<<"Removed "<<sta[top]<<endl;
        top--;}
    else cout<<"The stack is empty"<<endl;
    }
    void show_top(){
    cout<<"The top is "<<top<<endl;}
    void show_stack(){
    if(top>-1)
        for(int i = 0; i<=top; i++)
        {cout<<sta[i]<<endl;}
    else cout<<"The stack is empty."<<endl;
    }
    };
    int main()
    {
        stack_ s;
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        s.push(6);
        s.pop();
        s.push(7);
        s.show_top();
        s.show_stack();
    }
