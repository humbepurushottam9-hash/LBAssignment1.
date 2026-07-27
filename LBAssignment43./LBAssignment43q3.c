#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
    {
        return;
    }

    printf("%d ",iNo);

    Display(iNo - 1);

}

int main()
{
    Display(5);
    
    return 0;
}