#include<stdio.h>
void input(int *a,int *b)
{
        printf("Enter two numbers:\n");
        scanf("%d%d",a,b);
}
int add(int x,int y)
{
        int sum;
        sum=x+y;
        return sum;
}
void output(int sum)
{
        printf("The sum is %d",sum);
}
void main()
{
        int a,b,s;
        input(&a,&b);
        s=add(a,b);
        output(s);
}
