#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
    for(int i = iSize -1; i >= 0; i--)
    {
        if(arr[i] == iNo)
        {
            return i;      
        }
    }

    return -1;               
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = SearchLast(arr, 9, 40);

    if(iRet == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Last occurrence : " << iRet << endl;
    }

    return 0;
}