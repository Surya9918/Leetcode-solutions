class Solution:
    def minimumPushes(self, word: str) -> int:
        n=len(word)
        
        if n <= 8:
            return n
         
        elif n <= 16 :
            return (n - 8) * 2 + 8
        elif n <= 24 :
            return (n - 16) * 3 + (8 * 2) + 8
        else:
            return (n - 24) * 4 + (8 * 3) + (8 * 2) + 8
        