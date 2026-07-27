#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
    {
        return;
    }

    printf("* ");

    Display(iNo - 1);
    
}

int main()
{
    int Value = 0;

    printf("Enter the number: ");
    scanf("%d",&Value);

    Display(Value);

    return 0;
}