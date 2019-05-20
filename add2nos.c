#include<stdio.h>
int getinput()
{
        int a;
        printf("Enter a number:");
        scanf("%d",&a);
        return a;
}
int add(int x,int y)
{
        int sum;
        sum=x+y;
        return sum;
}
void output(int s)
{
        printf("The sum is %d",s);
}
void main()
{
        int a,b,sum;
        a=getinput();
        b=getinput();
        sum=add(a,b);
        output(sum);
}
