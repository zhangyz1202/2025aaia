/// week11-02.cpp
///���F�ѨM SOIT107_ADVANCE_009 �o�D
/// �ڭ̵y�L�Ʋߡi��֪k�j
#include <stdio.h>
int main()
{
    printf("�п�J1�Ӽ�(ex. 183)");
    int n;
    scanf("%d", &n); /// Ū�Jn
    int ans = 0; ///�Q���i�̤j���֡j
    while(n>0) ///while�j��A�@�����
    {
        if (n%10 > ans) ans = n%10; /// ��j���֡A��s����
        printf("��� %d\n",n%10);
        n = n / 10; ///�駹�֡An�ܤp
    }
    printf("�̤j���֬O %d\n", ans);
}
