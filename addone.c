#include<stdio.h>
int input()
{
        int a;
        printf("Enter the number:");
        scanf("%d",&a);
        return a;
}
int addone(int x)
{
        int y;
        y=x+1;
        return y;
}
void output(int z)
{
        printf("The result is %d",z);
}
void main()
{
        int a,b;
        a=input();
        b=addone(a);
        output(b);
}
