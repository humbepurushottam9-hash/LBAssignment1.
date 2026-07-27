#include<stdio.h>

void Display(char ch)
{
    if(ch > 'e')
    {
        return;
    }

    printf("%c ",ch);

    Display(ch + 1);
}

int main()
{
    Display('a');
    
    return 0;
}