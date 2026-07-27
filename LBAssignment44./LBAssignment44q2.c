#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
    {
        return;
    }

    Display(iNo - 1);

    printf("%d ",iNo);

}


int main()
{
    int Value = 0;

    printf("Enter the number: ");
    scanf("%d",&Value);
    
    Display(Value);

    return 0;
}