// week08-3.cpp
// LeetCode 2843. Count Symmetric Integers
// �q low ...high ���Ʀr��, ���u���@�b�v ����[�_�� == �k��[�_��
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
       int ans = 0; // �j��e�� ans �O 0
       for(int i=low; i<=high; i++){
           int a = i/1000;     //�d���(��߽� ��6�g ��¦�D)
           int b = i/100 % 10; //�ʦ��
           int c = i/10 % 10;  //�Q���
           int d = i % 10;     //�Ӧ��
           if( 11<=i && i<=99 && c==d) ans++; // 2���
           if( 1000<=i && i<=9999 && a+b==c+d) ans++; // 4���
        } // �j�餤�� ans++
        return ans; // �j��᭱, ��ans ���ӥ�
    }
};
