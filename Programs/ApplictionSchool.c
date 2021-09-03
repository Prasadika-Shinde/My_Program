/*Design application for school management system.
As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different.
For first standard fees are 8900, for second standard 12790, for third standard 21000 and
for fourth standard fees are 23450.
We have to accept standard from user and display the corresponding fees.*/


#include<stdio.h>                       //header file for input output

int SchoolFees(int iStandard)           //function defination
{
    int ifee=0;

    switch(iStandard)
    {
        case 1:
                 ifee=8900;
                 break;

        case 2:
                 ifee=12790;
                 break;
        
        case 3:
                ifee=21000;
                break;

        case 4:
                ifee=23450;
                break;
        
        default:
                printf("Invalid input\n");
    }
    return ifee;                        //ifee will return in main function at line no:47
}
}
int main()                              //Entry point function
{
    int iStd=0;
    int ifees=0;

    printf("\n\n\t\t\t*****Application for School Mangement*****\n\n");
    printf("\t\tEnter Any Standard: \n 1:1st standard \n 2:2nd standard \n 3:3rd standard \n 4:4th standard\n");
    scanf("%d",&iStd);

    ifees=SchoolFees(iStd);             //Function call

    printf("\t\tfees of %d standard is: %d",iStd,ifees);

    return 0;
}
