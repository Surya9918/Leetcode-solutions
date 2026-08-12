class Solution:
    def plusOne(self, d: List[int]) -> List[int]:
        a=len(d)-1
        for i in range(len(d) - 1, -1, -1):
            if d[a]<9:
                if d[i] < 9:
                   d[i] += 1
                   return d
            d[i]=0

        return [1]+d
        