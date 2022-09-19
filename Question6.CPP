//Accpet one number from user and print that number of * on screen.
#include<iostream>
using namespace std;
void Display(int iNO)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iNO;iCnt++)
    {
        cout<<"\t"<<"*";
    }
}
int main()
{
    int iValue=0;
    cout<<"Enter the number:"<<endl;
    cin>>iValue;
    Display(iValue);
    
     return 0;

}