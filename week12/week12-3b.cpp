// week12-3b.cpp
// SOIT100 Base 006
#include <stdio.h>
int main()
{
   int y;
   scanf("%d", &y);
   if(y%400==0)
   printf("%d is a leap year.\n",y);
   else if(y%100==0)
   printf("%d is not a leap year.\n",y);
   else if(y%4==0)
   printf("%d is a leap year.\n",y);
   else printf("%d is not a leap year.\n",y);
}
