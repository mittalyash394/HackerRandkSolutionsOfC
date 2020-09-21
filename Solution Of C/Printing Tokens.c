#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char s[1000];
    int index;
    fgets(s, sizeof(s), stdin);
    for(index=0; index< strlen(s); index++){
        if(s[index]==' '){
            printf("\n");
        }
        else{
            printf("%c",s[index]);
        }
    }
    return 0;
}

