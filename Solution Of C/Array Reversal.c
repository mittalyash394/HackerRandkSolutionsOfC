#include<stdio.h>
int main()
{
    int a[1000],i,n;
    scanf("%d",&n);
    if(n>=1 && n<=1000)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        } 
        for(i=n;i>0;i--)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}

