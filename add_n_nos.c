#include<stdio.h>
void getinput(int x[],int size)
{
        for(int i=0;i<size;i++)
                scanf("%d",&x[i]);
}
int compute(int x[],int size)
{
        int sum=0;
        for(int i=0;i<size;i++)
                sum=sum+x[i];
        return sum;
}
void output(int s)
{
        printf("The sum is %d",s);
}
void main()
{
        int a[20],n,sum;
        printf("Enter the number of elements:");
        scanf("%d",&n);
        getinput(a,n);
        sum=compute(a,n);
        output(sum);
}
