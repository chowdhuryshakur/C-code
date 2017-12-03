#include <bits/stdc++.h>
using namespace std;
class Queue{
private:
    int f=0, r=0, arr[1000];
public:
    void push(int x){
    arr[r] = x;
    r++;}

    void pop(){
    if(f==r) cout<<"Queue is empty"<<endl;
    else cout<<"Removed "<<arr[f]<<endl;
    f++;}

    void Front(){
    if(f==r) cout<<"Queue is empty."<<endl;
    else cout<<"Front is "<<arr[f]<<endl;}

    void Size(){
    cout<<"Size is "<<r-f<<endl;}
};

int main(){
Queue q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.Front();
q.Size();
q.pop();
q.Size();
q.Front();}
