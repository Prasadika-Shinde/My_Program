/*Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)*/

#include<stdio.h>                               //header file for input output

int EvenSum(int fiStart , int fiEnd)           //function defination
{
{
    int iNo=0;
    int Sum=0;

    for(iNo=fiStart; iNo<=fiEnd; iNo++)
    {
        if(iNo%2==0)
        {
            Sum=Sum+iNo;
        }
    }
    return Sum;
}
int main()                      //Entry point function
{
    int iStarrange=0;
    int iEndrange=0;
    int iSum=0;
    
    printf("\n\n\t\t\t*****Addition of Even Number*****\n\n");
    printf("\t\tEnter start range:\n");
    scanf("%d",&iStarrange);

    printf("Enter End range: \n");
    scanf("%d",&iEndrange);

    iSum=EvenSum(iStarrange,iEndrange);         //Function Call
    printf("\t\tAddition of Even Numbers: %d",iSum);

    return 0;
}
