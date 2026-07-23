#include<iostream>
using namespace std;

template<class T>
T Multiply(T no1, T no2)
{
    T Ans;
    Ans = no1 * no2;
    return Ans;
}

int main()
{
    int iRet = Multiply(10,20);
    cout<<iRet<<endl;
    
    float fRet = Multiply(10.3f,20.4f);
    cout<<fRet<<endl;

    return 0;
}

