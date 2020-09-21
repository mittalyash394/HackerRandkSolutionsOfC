#include<stdio.h>
int main()
{
 int i,j,k,n,S[20],t;
 printf("Enter a no");
 scanf("%d",&n);
 printf("Enter the three no");
 scanf("%d %d %d",&S[1],&S[2],&S[3]);
 for(t=4;t<=n;t++)
 {
  S[t]=S[t-1]+S[t-2]+S[t-3];
 }
 printf("%d",S[n]);
 return 0;
}

