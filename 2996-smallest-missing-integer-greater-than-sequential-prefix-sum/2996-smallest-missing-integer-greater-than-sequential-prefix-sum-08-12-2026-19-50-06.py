class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        a = nums[0]
        for i in range(len(nums) - 1):
            if nums[i] + 1 == nums[i + 1]:
                a += nums[i + 1]
            else:
                break 
        num_set = set(nums)
        while a in num_set:
            a += 1

        return a