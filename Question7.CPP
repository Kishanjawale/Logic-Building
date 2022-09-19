//Accept one number from user and print that number of * on screen
//using while loop
#include<iostream>
using namespace std;
void Display(int iNo)
{
    
    while (iNo >0 )
    {
        cout<<"\t *";
        iNo--;
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