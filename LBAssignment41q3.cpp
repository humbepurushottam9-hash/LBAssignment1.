#include<iostream>
using namespace std;

template<class T>
T AddN(T *arr, int iSize)
{
    T Sum = 0;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        Sum = Sum + arr[i];
    }
    return Sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0f,20.0f,30.0f,40.0f,50.0f};

    int iSum = AddN(arr,5);
    cout<<iSum<<endl;

    float fSum = AddN(brr,5);
    cout<<fSum<<endl;

    return 0;
}
