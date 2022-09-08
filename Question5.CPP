//Accept one number from user and print that number of * on screen 
#include<iostream>
using namespace std;

void Accept(int iNo)
{
    for(int i=0;i<iNo;i++)
    {
        printf("*\t");
    }
}
int main()
{
    int ivalue=0;
    ivalue=5;
    Accept(5);
    return 0;

}