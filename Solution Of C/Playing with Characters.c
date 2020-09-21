#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100], sen[100];
    int index;
    scanf("%c",&ch);
    scanf("%s",s);
    scanf(" %[^\n]%*c", sen);
    printf("%c\n",ch);
    puts(s);
    printf("%s",sen);
    return 0;
}

