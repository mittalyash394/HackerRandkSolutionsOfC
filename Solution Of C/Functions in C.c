#include <stdio.h>
int max_of_four();
int main()
 {
  int a;
  a = max_of_four();
  printf("%d",a);
  return 0;
}
int max_of_four() 
{
  int p, q, r, s;
  scanf("%d \n%d \n%d \n%d \n",&p,&q,&r,&s);
  if (p > q && p > r && p > s) 
  {
    //printf("%d",p);
    return p;
  }
  if (q > p && q > r && q > s) 
  {
      //printf("%d",q);
    return q;
  }
  if (r > p && r > q && r > s) 
  {
      //printf("%d",r);
    return r;
  }
  if (s > p && s > q && s > r) 
  {
      //printf("%d",s);
    return s;
  }
return 0;
}

