#include<stdio.h>
void main()
{
        int num1,num2,den1,den2,num_res,den_res;
        printf("Enter the numerator and denominator of fraction 1:\n");
        scanf("%d%d",&num1,&den1);
        printf("Enter the numerator and denominator of fraction 2:\n");
        scanf("%d%d",&num2,&den2);
        num_res=(num1*den2)+(num2*den1);
        den_res=den1*den2;
        printf("The result of %d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num_res,den_res);
}

