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

int FirstOccur(PNODE head, int No)
{
    int iPos = 1;

    while(head != NULL)
    {
        if(head->data == No)
        {
            return iPos;
        }

        iPos++;
        head = head->next;
    }

    return -1;
}

int main()
{
    PNODE first = NULL;
    int iValue;

    InsertFirst(first,11);
    InsertFirst(first,20);
    InsertFirst(first,30);
    InsertFirst(first,20);
    InsertFirst(first,40);

    Display(first);

    cout<<"Enter the number to search : ";
    cin>>iValue;

    int iRet = FirstOccur(first, iValue);

    if(iRet == -1)
    {
        cout<<"Number is not present."<<endl;
    }
    else
    {
        cout<<"First occurrence is at position : "<<iRet<<endl;
    }

    return 0;
}