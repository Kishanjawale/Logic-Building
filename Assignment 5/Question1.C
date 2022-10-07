#include<stdio.h>
// write a program which accepts number from user and display its digit in reverse.
void printReverse(int ino)
{
    int iCnt=0;
    int idit=0;
    printf("Digits inreverse order:");
    while (ino > 0)
    {
        idit=ino%10;
        printf("%d\n",idit);
        ino=ino/10;
    }
}

//main function.
int main()
{
    int ivalue=0;
    printf("Enter the number:\n");
    scanf("%d",&ivalue);
    printReverse(ivalue);
    
    return 0;
    
}
