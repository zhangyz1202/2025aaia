/// week12-4.cpp
/// �Ψ禡�I�s�禡, �ѥX Fibonacci
#include <stdio.h>
int fib(int n)
{
   if(n==0) return 0;
   if(n==1) return 1;
   return fib(n-1) + fib(n-2);
}
int main()
{
   printf("�п�J�Ʀr(ex. 13):");
   int n;
   scanf("%d", &n);

   printf("���׬O:%d\n",fib(n));
}
