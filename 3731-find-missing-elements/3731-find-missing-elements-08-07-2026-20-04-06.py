class Solution:
    def findMissingElements(self, nums: list[int]) -> list[int]:
        nums.sort()
        a = []
        for i in range(len(nums) - 1):
            current_num = nums[i]
            next_num = nums[i+1]
            while current_num + 1 < next_num:
                current_num += 1
                a.append(current_num)
                
        return a
