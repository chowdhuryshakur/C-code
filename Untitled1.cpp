#include<bits/stdc++.h>
using namespace std ;
class List
{
public :
    int a;
    List *next ;
    List ()
    {
        next = NULL ;
    }
};

List *head = NULL;
void create ( int x )
{
     List *now ;
     for (int i=1 ; i<=x;i ++)
     {
         if (head ==NULL)
         {
             head = new List();
             cin >> head -> a ;
             now = head ;
         }
         else
         {
             List *n = new List ();
             cin >> n -> a;
                 now -> next = n ;
                 now = n ;
         }
     }
}
void show ()
{
    List *temp = head ;
    while (temp!=NULL)
    {
        cout << temp -> a << endl;
        temp = temp -> next ;
    }
}

void maxi()
{
    if(head==NULL) return ;

    List *temp = head ;
    int mn = INT_MIN ;

    while( temp!=NULL )
    {
        if(temp->a>mn) mn = temp->a;
        temp=temp->next;
    }
    cout << "Maximum :: " << mn << endl ;
}

void mode()
{
    if(head==NULL) return ;
    List *temp = head ;
    int cnt = 0 , md = -1 ;
    while( temp!=NULL )
    {
        List *n = head ;
        int co = 0 ;
        while(n!=NULL)
        {
            if(n->a==temp->a) co++;
            n=n->next ;
        }
        if(co>cnt) cnt = co, md = temp->a;
        temp=temp->next ;
    }
    cout << "Mode :: " << md << endl ;
}


int main ()
{

    create (5);
    show();
    maxi();
    mode();
    return  0 ;
}
