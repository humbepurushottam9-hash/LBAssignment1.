#include<stdio.h>

int Rev = 0;

int Reverse(int iNo)
{
    if(iNo == 0)
    {
        return Rev;
    }

    Rev = (Rev * 10) + (iNo % 10);

    return Reverse(iNo / 10);
}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    iRet = Reverse(Value);

    printf("Reverse number = %d\n", iRet);

    return 0;
}