class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        left = 0
        max_length = 0
        char_count = {}
        
        for right in range(len(s)):
            current_char = s[right]
            char_count[current_char] = char_count.get(current_char, 0) + 1
            
            while char_count[current_char] > 2:
                left_char = s[left]
                char_count[left_char] -= 1
                left += 1
                
            max_length = max(max_length, right - left + 1)
            
        return max_length