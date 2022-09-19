//Accept number from user and check whether number is even or odd
#include<iostream>
using namespace std;
bool Check(int iNo)
{
    if(iNo%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet=false;
    cout<<"Enter the Number:";
    cin>>iValue;
    bRet=Check(iValue);
    if(bRet==true)
    {
        cout<<"Number is EVEN";
    }
    else
    {
        cout<<"Number is ODD";
    }
    return 0;
}