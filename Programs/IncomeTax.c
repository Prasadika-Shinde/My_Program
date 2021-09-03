/*Design application for income tax department to calculate tax amount. According to the
income tax department there is no income tax for the income less than 5 lakhs.
If income is in between 5 to 10 lakhs then there will be 10% tax.
If income is in between 10 to 20 lakhs then there will be 20% tax.
And for more than 20 lakhs there will be 30% tax.
We have to accept gross income from user and return the tax amount.*/

#include<stdio.h>                   //header file for input output

float IncomeTax(float fAmount)      //Function Defination
{
    float isum=0.0f;
    float iResult= 0.0f;

    if(fAmount<=500000)
    {
        printf("No Income Tax\n");
    }
    else if( (fAmount>500000) && (fAmount<=1000000) )
    {
        iResult=fAmount-500000;
        iResult=iResult*10/100;
    }
    else if( (fAmount>1000000) && (fAmount<=2000000) )
    {
        iResult= fAmount-1000000;
        isum= iResult*20/100;
        iResult=500000*10/100+isum;
    }
    else if(fAmount>=2000000)
    {
        iResult=fAmount-2000000;
        isum=iResult*30/100;
        iResult=(1000000*20/100)+(500000*10/100)+isum;
    }

    return iResult;
}
int main()                      //Entry point Function
{
    float famount=0.0f;
    float iRes=0.0f;

     printf("\n\n\t\t\t*****Application For Income Tax*****\n\n");
    printf("\t\tEnter gross Income:");
    scanf("%f",&famount);

    iRes= IncomeTax(famount);       //Function Call

    printf("\t\tTax Amount is:%f",iRes);

    return 0;
}

