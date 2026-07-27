#include<stdio.h>

int LargestDigit(int iNo)
{
    int iDigit = 0;
    int Max = 0;

    if(iNo == 0)
    {
        return 0;
    }

    iDigit = iNo % 10;
    Max = LargestDigit(iNo / 10);

    if(iDigit > Max)
    {
        return iDigit;
    }

    else
    {
        return Max;
    }
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    iRet = LargestDigit(Value);

    printf("%d",iRet);

    return 0;
}