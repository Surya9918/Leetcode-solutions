class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        a=0
        for i in range(len(nums)-1):
            for j in range(i+1,len(nums)):
                a = max(a,(nums[i]-1)*(nums[j]-1))
        return a
        