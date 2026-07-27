#include<stdio.h>

int Sum(int iNo)
{

    if(iNo == 0)
    {
        return 0;
    }

   return(iNo % 10) + Sum(iNo / 10);

}

int main()
{
    int Value = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&Value);

    iRet = Sum(Value);
    
    printf("%d",iRet);

    return 0;
}