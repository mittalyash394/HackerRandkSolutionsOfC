#include<stdio.h>
int main()
{
    int a[1000],i,n,sum=0;
    scanf("%d\n",&n);
    if(n>=1 && n<=1000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d\t ",&a[i]);
            sum=sum+a[i];
        }    
        printf("%d",sum);
    } 
    return 0;
}

