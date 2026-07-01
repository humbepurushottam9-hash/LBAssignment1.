#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT Mask = (1 << 6) | (1 << 9);

    return iNo & ~((1 << 6) | (1 << 9));
}

int main()
{
    UINT Value = 0;
    UINT Ret = 0;

    printf("Enter the number:\n");
    scanf("%u",&Value);

    Ret = OffBit(Value);

    printf("Modified number is: %u\n",Ret);

    return 0;
}
