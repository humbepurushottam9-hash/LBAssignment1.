#include<iostream>
using namespace std;

template<class T>
T Max(T *arr, int Size)
{
    T MaxValue = 0;
    
    for(int i = 1; i < Size; i++)
    {
        if(arr[i] > MaxValue)
        {
            MaxValue = arr[i];
        }
    }

    return MaxValue;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,9.8f,56.4f,11.5f,65.4f};

    int iRet = Max(arr,5);
    cout<<iRet<<endl;

    float fRet = Max(brr,5);
    cout<<fRet<<endl;

    return 0;
}