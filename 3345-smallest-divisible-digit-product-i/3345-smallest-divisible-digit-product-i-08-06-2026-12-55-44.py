class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        while True:
            a=1
            x=n
            while x>0:
                r = x%10
                a= a*r
                x= x//10
            if a%t ==0:
                return n
            n=n+1
        