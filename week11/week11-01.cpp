/// week11-01.cpp
/// ���/�禡 function

#include <stdio.h>

///�e���w�q�ڭ̪��禡
///�e�X int ���
///     �e�i�h���a�A���b
int addnum(int a, int b)
{
    printf("�b�禡addnum()�̡A�Ѽ�a:%d b:%d\n", a, b);
    int ans = a+b;
    printf("��X���� %d �nreturn �X�h��\n",ans);
    return ans; ///���X�Ӫ����G�ǥX�h
}

int main()
{ ///�D�n���禡�B�D�{��
    printf("�b main() �I�s�ϥ� addnum() \n");
    int ans = addnum(2, 3);
    printf("�o�쪺���׬O:%d\n",ans);
}
