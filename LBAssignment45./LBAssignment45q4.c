#include<stdio.h>

int Fact(int iNo)
{
    if(iNo == 0 || iNo == 1)
    {
        return 1;
    }

    return iNo * Fact(iNo - 1);
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&Value);

    iRet = Fact(Value);

    printf("%d",iRet);

    return 0;
}