#include<stdio.h>

void Display(char ch)
{
    if(ch > 'E')
    {
        return;
    }

    printf("%c ",ch);

    Display(ch + 1);
}

int main()
{
    Display('A');
    
    return 0;
}