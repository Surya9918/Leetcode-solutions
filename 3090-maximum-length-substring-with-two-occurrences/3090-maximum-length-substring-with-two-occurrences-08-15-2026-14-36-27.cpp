class Solution {
public:
    int maximumLengthSubstring(string s) {
    int left = 0;
    int max_length = 0;
    unordered_map<char, int> char_count;
        for (int right = 0; right < s.length(); right++) {
        char_count[s[right]]++;
        while (char_count[s[right]] > 2) {
            char_count[s[left]]--;
            left++;
        }
        max_length = max(max_length, right - left + 1);
    }
    
    return max_length;
}
        
    
};