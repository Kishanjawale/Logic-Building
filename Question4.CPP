#include<iostream>
//Accept one  number and check whether it is divisible by 5 or not.
using namespace std;
bool Check(int iNo)
{
    if((iNo%5)==0)
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
    bool bRet;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    bRet= Check(iValue);
    if(bRet== true)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("Number is not Divisible by 5");
    }
    return 0;
}