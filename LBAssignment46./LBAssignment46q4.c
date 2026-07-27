#include<stdio.h>

int SmallestDigit(int iNo)
{
    int iDigit = 0;
    int Min = 0;

    if(iNo == 0)
    {
        return 9;
    }

    iDigit = iNo % 10;
    Min = SmallestDigit(iNo / 10);

    if(iDigit < Min)
    {
        return iDigit;
    }

    else
    {
        return Min;
    }
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    iRet = SmallestDigit(Value);

    printf("%d",iRet);

    return 0;
}