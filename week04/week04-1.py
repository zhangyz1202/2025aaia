# week04-1.py �G�X�@ Python ����
# LeetCode 2529 . Maximun Count of Positive Integer and Negative Integer
class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        pos = 0
        neg = 0
        for i in range(len(nums)):
            if nums[i] > 0: pos += 1 #����
            if nums[i] < 0: neg += 1 #�t��

        return max (pos, neg) #��j���� return �Ǧ^�h
