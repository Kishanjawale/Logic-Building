#include<stdio.h>
//Write a program which accepte one number from user and return the frequency of 4 in its digits.
/*
    input: 1434
    output: 2

    input:1000
    output: 0
*/

int CheckFrequency(int iNo)
{
    int iCnt=0;
    int idigit=0;
    while(iNo > 0)
    {
         idigit=iNo%10;
        if(idigit==4)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}

int main()
{
    int ivalue=0;
    int iRet=0;
    printf("Enter the Number:");
    scanf("%d",&ivalue);
    iRet=CheckFrequency(ivalue);
    printf("Frequency of 4 in given code: %d",iRet);
    return 0;
}