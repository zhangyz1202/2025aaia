//Week03-1.cpp �G�X�@�� C++ ������
//LeetCode 2579. Count Total Number of Colored Cells
class Solution {
public:
    long long coloredCells(int n) {
      long long ans = n; // �n�h�g�o��, ��Ʀr�ɯ�, ��64�줸�u�ܪ��ܪ�����ơv
      return ans*ans + (ans-1)*(ans-1); //C/C++/Java/C#���n�[����


    }
};
