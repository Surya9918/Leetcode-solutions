class Solution:
    def isPalindrome(self, x: int) -> bool:
        a=str(x)
        b=a
        b=b[::-1]
        return a==b
