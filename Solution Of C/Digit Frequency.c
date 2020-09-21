#include<stdio.h>
int main()
{
 char a[1000];int i,t,j,A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0;
 scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
   {
     if(a[i]=='0')
     {
      A=A+1;
     }
     else if(a[i]=='1')
     {
      B=B+1;
     }
     else if(a[i]=='2')
     {
      C=C+1;
     }
     else if(a[i]=='3')
     {
      D=D+1;
     }
     else if(a[i]=='4')
     {
      E=E+1;
     }
      else if(a[i]=='5')
      {
       F=F+1;
      }
      else if(a[i]=='6')
      {
       G=G+1;
      }
      else if(a[i]=='7')
      {
       H=H+1;
      }
      else if(a[i]=='8')
      {
       I=I+1;
      }
      else if(a[i]=='9')
      {
       J=J+1;
      }
   }
  printf("%d %d %d %d %d %d %d %d %d %d",A,B,C,D,E,F,G,H,I,J);
}

