/*Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.*/

#include<stdio.h>                 //header file for input output

int DollerToRupees(int);             //prototype function declaration
int DollerToRupees(int iNum)        //function defination
{
    int iResult=0;

    iResult=iNum*70;

    return iResult;                 //iResult will return in main function at line no:24
}
int main()                          //Entry point function
{
    int idollar=0;
    int iRet=0;

    printf("\n\n\t\t\t*****Doller Convert in Rupees*****\n\n");
    printf("\t\tEnter of Number US Dollar:");
    scanf("%d",&idollar);

    iRet= DollerToRupees(idollar);      //Function Call

    printf("\t\t Value in INR is: %d",iRet);

    return 0;
}
