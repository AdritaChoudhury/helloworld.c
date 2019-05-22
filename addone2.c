#include<stdio.h>
void input(int *a)
{
        printf("Enter a number:");
        scanf("%d",a);
}
void addone(int *x,int *y)
{
        *y=*x+1;
}
void result(int m)
{
        printf("The result is:%d",m);
}
void main()
{
        int a,b;
        input(&a);
        addone(&a,&b);
        result(b);
}
