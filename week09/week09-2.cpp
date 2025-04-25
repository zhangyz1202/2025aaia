// week09-2.cpp
#include <stdio.h>
int main()
{
   int a[100];
   for (int i=0; i<100;i++){
        scanf ("%d" ,&a[i]);
   }
   for (int i=0; i<100; i++){
        for (int k=i+1;k<100 ;k++){
             if(a[i]>a[k]){
                 int temp = a[i];
                 a[i] = a[k];
                 a[k] = temp;
             }
        }
   }
   for (int i=0;i<100;i++) {
        printf("%d ",a[i]);
   }
}
