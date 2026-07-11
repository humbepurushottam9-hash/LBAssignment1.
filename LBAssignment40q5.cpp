#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

void Display(PNODE head)
{
    while(head != NULL)
    {
        cout<<"| "<<head->data<<" | -> ";
        head = head->next;
    }

    cout<<"NULL"<<endl;
}

void InsertFirst(PNODE &head, int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = head;
    head = newn;
}

int CountLess(PNODE head, int X)
{
    int iCount = 0;

    while(head != NULL)
    {
        if(head->data < X)
        {
            iCount++;
        }

        head = head->next;
    }

    return iCount;
}

int main()
{
    PNODE first = NULL;
    int iValue;

    InsertFirst(first,11);
    InsertFirst(first,20);
    InsertFirst(first,30);
    InsertFirst(first,40);
    InsertFirst(first,50);

    Display(first);

    cout<<"Enter the value of X : ";
    cin>>iValue;

    cout<<"Number of elements less than "<<iValue<<" is : "
        <<CountLess(first, iValue)<<endl;

    return 0;
}