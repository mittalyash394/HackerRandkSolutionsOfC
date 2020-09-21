#include<stdio.h>
int main()
{
    int a,sum=0,r;
    scanf("%d",&a);
    if(a>0)
    {
        r=a%10;
        sum=sum+r;

        a=a/10;
        r=a%10;
        sum=sum+r;

        a=a/10;
        r=a%10;
        sum=sum+r;

        a=a/10;
        r=a%10;
        sum=sum+r;

        a=a/10;
        r=a%10;
        sum=sum+r;
        printf("%d",sum);
    }
    else 
    {
        printf("Wrong Answer");
    }
    return 0;
}

