//Accpet two numbers from user adn display first number in second number os times
#include<iostream>
using namespace std;
int Display(int iNo1,int iFrequency)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iFrequency;iCnt++)
    {
        cout<<iNo1<<"\t";
    }

}
int main()
{
    int iValue1=0;
    int iValue2=0;
    cout<<"Enter First Number:";
    cin>>iValue1;

    cout<<"Enter Second Number:";
    cin>>iValue2;
    Display(iValue1,iValue2);
    return 0;

}