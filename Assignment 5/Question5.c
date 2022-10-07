#include<stdio.h>
//Write a program which accepte one number from user and
//count the frequency of such digits which are less than 6
/*
    input: 1232
    output: 4

    input:1000
    output: 4

    input: 89277
    output: 1
*/

int CheckFrequency(int iNo)
{
    int iCnt=0;
    int idigit=0;
    while(iNo > 0)
    {
         idigit=iNo%10;
        if(idigit <6 )
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
    printf("Frequency of digits less than 6: %d",iRet);
    return 0;
}