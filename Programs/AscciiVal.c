#include<stdio.h>

int main()
{
    int iAsccii;

    printf("\t\t//////// ASCCII CODE ////////\n");

    for(iAsccii= -127; iAsccii<=128; iAsccii++)
    {
        printf("\n\t\t %d \t=\t %c\n",iAsccii,iAsccii);
    }
    //printf("\n");

    return 0;
}
