#include<iostream>
#include<math.h>
using namespace std;
struct Node{
    int a;
    int pow;
    struct Node* next;
};

struct Node* head3;

struct Node* Insert( struct Node* HEAD)
{
    int n=1,a1,pow1;
    while(n==1)
    {
        cout<<"Enter the value of coefficient: ";
        cin>>a1;
        cout<<"Enter the value of the power: ";
        cin>>pow1;
        Node* temp= new Node();
        Node* temp1=HEAD;
        temp->a=a1;
        temp->pow=pow1;
        temp->next=NULL;
        if(temp1==NULL)
        {
            HEAD=temp;
        }else{
            while((temp1->next)!=NULL)
            {
                temp1=temp1->next;
            }
            temp1->next=temp;
        }
        cout<<"Enter 0 to terminate or 1 to continue: ";
        cin>>n;

    }
    return HEAD;
}

void Print(struct Node* HEAD)
{
    Node* temp=HEAD;
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        {
            cout<<temp->a<<"x^"<<temp->pow<<endl;
        }else{
            cout<<temp->a<<"x^"<<temp->pow<<" + ";
        }
        
        temp=temp->next;
    }

}
struct Node* CreateNewNode()
{
    Node* temp=new Node();
    temp->next=NULL;
    return temp;
}
void Multiplication(struct Node* HEAD1, struct Node* HEAD2)
{
    Node* temp1=HEAD1;
    Node* temp2=HEAD2;
    
    head3=CreateNewNode();
    Node* temp=head3;
            while(temp2!=NULL)
            {
                while(temp1!=NULL)
                {
                    temp->a=(temp1->a)*(temp2->a);
                    temp->pow=(temp1->pow)+(temp2->pow);
                    temp->next=CreateNewNode();
                    temp=temp->next;
                    temp1=temp1->next;
                }
                temp1=HEAD1;
                temp2=temp2->next;
            }
        // FOR ADDING REPEATING POWERS OF 'X'
        struct Node* temp4=head3;    
        while(temp4!=NULL)
        {
            struct Node* prev=temp4;
            struct Node* temp5=temp4->next;
            while(temp5!=NULL)
            { 
                if( (temp4->pow)==(temp5->pow) )
                {
                    temp4->a=temp4->a+temp5->a;
                    prev->next=temp5->next;
                   // free(temp5);
                }else{
                    prev=temp5;
                }
                temp5=temp5->next;
            }
            temp4=temp4->next;
        }

   cout<<"SUCCESS!!!!!!!!!"<<endl;
}

int main()
{
    struct Node* head1=NULL;
    struct Node* head2=NULL;
    head3=NULL;
    head1=Insert(head1);    Print(head1);
    head2=Insert(head2);    Print(head2);
    Multiplication(head1,head2);    Print(head3);


    return 0;
}