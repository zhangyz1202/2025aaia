 ///week10-2.cpp
#include <stdio.h>
int main()
{
    printf("請輸入1個整數");
    int n;
    scanf("%d", &n);
    printf("個位數是 %d\n", n %10);
    printf("十位數是 %d\n", n/10 %10);
    printf("百位數是 %d\n", n/100 %10);
}
