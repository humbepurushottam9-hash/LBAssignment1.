#include<stdio.h>

int Multiply(int iNo)
{

    if(iNo == 0)
    {
        return 1;
    }

   return(iNo % 10) * Multiply(iNo / 10);

}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&Value);

    iRet = Multiply(Value);
    
    printf("%d",iRet);

    return 0;
}