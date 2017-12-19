#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int a;
    node *next = NULL;
    };

 node *head = NULL;

 void create(int x)
 {
     node *now;
     for(int i=0; i<x; i++)
     {
         if(head == NULL)
         {
             head = new node;
             cin>>head -> a;
             now = head;
         }
         else
         {
             node *n = new node;
             cin>>n->a;
             now->next=n;
             now=n;
         }
     }
 }
 void addfirst(int y)
 {
     if(head==NULL) return;
     else{node *n = new node;
            n->a=y;
            n->next=head;
            head=n;}
 }
 void addlast(int z)
 {
     node *temp = head;
     node *n = new node;
     n->a=z;
     while(temp->next != NULL)
     {
        temp=temp->next;
     }
     temp->next=n;
 }
 void countnode()
 {
     int co;
     if(head == NULL) return;
     else{ node *temp = head;
            while(temp!=NULL)
                {
                    co++;
                    temp=temp->next;
                }
                cout<<"No of node is "<<co<<endl;
            }
 }
 void deletefirst()
 {
     if(head==NULL) return;
     else {node *n = new node;
               n = head->next;
               cout<<head->a<<" has deleted."<<endl;
               head = n;
               }

 }
 void deletelast()
 {
    node *temp = head;
    node *n;
    while(temp->next!=NULL)
    {
        n= temp;
        temp=temp->next;
    }
    cout<<temp->a<<" has deleted."<<endl;
    n->next=NULL;
 }
 void maxi()
 {
     int m=0;
     if(head == NULL) return;
     else{node *temp = head;
           while(temp!=NULL)
            {
                if(temp->a>m)
                    m=temp->a;
                temp=temp->next;
            }
            cout<<"Maximum is "<<m<<endl;
           }
 }
 void mini()
 {
     int m=100000000000000000000;
     if(head==NULL) return;
     else{node *temp = head;
           while(temp!=NULL)
            {
                if(temp->a<m)
                    m=temp->a;
                temp=temp->next;
            }
            cout<<"Minimum is "<<m<<endl;
           }
 }
 void mode()
 {
     int cou=0,  md=0;
     if(head==NULL) return;
     else{node *temp = head;
          while(temp!=NULL)
            {
                int co=0;
                node *n = head;
                while(n!=NULL)
                {
                   if(n->a==temp->a)
                         co++;
                    n=n->next;
                }
                if(co>cou)
                    {cou=co;
                     md = temp->a;}
                temp=temp->next;
            }
            cout<<"Mode is "<<md<<endl;
          }
 }
 void deleteduplicate()
 {
       node *ptr1, *ptr2, *duplicate;
    ptr1 = head;
    while (ptr1 != NULL && ptr1->next != NULL)
    {
        ptr2 = ptr1;

        while (ptr2->next != NULL)
        {
            if (ptr1->a == ptr2->next->a)
            {
                duplicate = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete(duplicate);
            }
            else
                ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
 }
 void show()
 {
     node *temp = head;
     while(temp!=NULL)
     {
        cout<<temp->a<<endl;
        temp = temp->next;
     }
 }

 int main()
 {
     create(5);
     deleteduplicate();
     show();


 }
