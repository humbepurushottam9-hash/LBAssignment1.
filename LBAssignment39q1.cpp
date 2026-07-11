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

bool Search(PNODE head, int No)
{
    while(head != NULL)
    {
        if(head->data == No)
        {
            return true;
        }

        head = head->next;
    }

    return false;
}

int main()
{
    PNODE first = NULL;

    InsertFirst(first,40);
    InsertFirst(first,30);
    InsertFirst(first,20);
    InsertFirst(first,10);

    Display(first);

    if(Search(first,30))
    {
        cout<<"Number is present"<<endl;
    }
    else
    {
        cout<<"Number is not present"<<endl;
    }

    return 0;
}