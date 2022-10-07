#include<stdbool.h>
#include<stdio.h>
// write a program which accepts number from user and check whether it contains 0 or not 

/*
    input: 1234
    output:Do not Contains Zero

    input:12202
    output:Contains Zero
*/

bool CheckZero(int ino)
{
    int iCnt=0;
    int idit=0;
    int flag=0;
    
    while (ino > 0)
    {
        idit=ino%10;
        if(idit==0)
        {
            flag=1;
        }
        ino=ino/10;
    }

    if(flag==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

//main function.
int main()
{
    int ivalue=0;
    bool bRet=false;
    printf("Enter the number:\n");
    scanf("%d",&ivalue);
    bRet=   CheckZero(ivalue);
    
    if(bRet== true)
    {
        printf("This Number contains 0 \n");

    }
    else
    {
        printf("This Number do not Contains 0 \n");
    }
    
    return 0;
    
}