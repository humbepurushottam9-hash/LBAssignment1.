#include<stdio.h>

void Display(int iNo, char ch)
{
    if(iNo == 0)
    {
        return;
    }

    printf("%c ",ch);

    Display(iNo -1, ch + 1);

}

int main()
{
    int Value = 0;

    printf("Enter number: ");
    scanf("%d",&Value);
    
    Display(Value, 'A');
    
    return 0;
}
