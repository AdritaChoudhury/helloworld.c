#include<stdio.h>
void input(int *num1,int *num2,int *den1,int *den2)
{
        printf("Enter the numerator and denominator for fraction 1:\n");
        scanf("%d%d",num1,den1);
        printf("Enter the numerator and denominator for fraction 2:\n");
        scanf("%d%d",num2,den2);
}
void fraction(int *num_res,int *den_res,int num1,int num2,int den1,int den2)
{
        *num_res=(num1*den2)+(num2*den1);
        *den_res=den1*den2;
}
void output(int num_res,int den_res,int num1,int num2,int den1,int den2)
{
        printf("The result of %d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num_res,den_res);
}
void main()
{
        int num1,num2,den1,den2,num_res,den_res;
        input(&num1,&num2,&den1,&den2);
        fraction(&num_res,&den_res,num1,num2,den1,den2);
        output(num_res,den_res,num1,num2,den1,den2);
}
