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

void InsertFirst(PNODE &head, int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = head;
    head = newn;
}

void Display(PNODE head)
{
    while(head != NULL)
    {
        cout<<"| "<<head->data<<" | -> ";
        head = head->next;
    }

    cout<<"NULL"<<endl;
}

int Frequency(PNODE head, int No)
{
    int iCount = 0;

    while(head != NULL)
    {
        if(head->data == No)
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
    InsertFirst(first,11);
    InsertFirst(first,30);
    InsertFirst(first,11);
    InsertFirst(first,40);

    Display(first);

    cout<<"Enter the number whose frequency you want to count : ";
    cin>>iValue;

    cout<<"Frequency is : "<<Frequency(first, iValue)<<endl;

    return 0;
}