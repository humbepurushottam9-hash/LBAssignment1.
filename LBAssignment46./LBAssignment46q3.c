#include<stdio.h>

int CountSmall(char * str)
{
    if(*str == '\0')
    {
        return 0;
    }

    if((*str >= 'a') && (*str <= 'z'))
    {
        return 1 + CountSmall(str + 1);
    }
    else
    {
        return CountSmall(str + 1);
    }
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}