#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, k, i, j , andsum=0, orsum=0, xorsum=0;
    scanf("%d %d",&n, &k);
    for(i=1;i<=n; i++){
       for(j=i+1; j<=n; j++){
           if((i|j) > orsum && (i|j) < k){
               orsum= i|j;
           }
           if((i&j) > andsum && (i&j) < k){
               andsum = i&j;
           }
           if((i^j) > xorsum && (i^j) < k){
               xorsum = i^j;
           }
       }
    }
    printf("%d\n%d\n%d",andsum, orsum, xorsum);
    return 0;
}

