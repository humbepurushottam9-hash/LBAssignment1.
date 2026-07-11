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

void DisplayOdd(PNODE head)
{
    while(head != NULL)
    {
        if((head->data % 2) != 0)
        {
            cout<<head->data<<" ";
        }

        head = head->next;
    }

    cout<<endl;
}

int main()
{
    PNODE first = NULL;

    InsertFirst(first,51);
    InsertFirst(first,40);
    InsertFirst(first,30);
    InsertFirst(first,25);
    InsertFirst(first,10);

    Display(first);

    cout<<"Odd elements are : ";
    DisplayOdd(first);

    return 0;
}