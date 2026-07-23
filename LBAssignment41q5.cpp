#include<iostream>
using namespace std;

template<class T>
T Small(T *arr,int Size)
{
    T SmallValue = 0;

    for(int i = 1; i < Size; i++)
    {
        if(arr[i] < SmallValue)
        {
            SmallValue = arr[i];
        }
    }
    return SmallValue;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,9.8f,56.4f,11.5f,65.4f};

    int iRet = Small(arr,5);
    cout<<iRet<<endl;

    float fRet = Small(brr,5);
    cout<<fRet<<endl;

    return 0;
}

