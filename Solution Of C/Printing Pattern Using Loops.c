#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n, i, j, min;
    scanf("%d", &n);
    for(i=0; i< (2*n-1); i++){
        for(j=0; j< (2*n-1); j++){
           min = i < j ? i : j;
            min = min < (2*n-1)-i ? min : (2*n-1)-i-1;
            min = min < (2*n-1)-j-1 ? min : (2*n-1)-j-1;
            printf("%d ",n-min);
        }
    printf("\n");
    }
    return 0;
}

