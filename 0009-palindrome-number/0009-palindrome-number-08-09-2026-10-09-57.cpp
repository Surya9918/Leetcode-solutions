class Solution {
public:
    bool isPalindrome(int x) {
        string a = "";
        string b = to_string(x);
        for(int i = b.size() - 1; i >= 0; i--){
            a += b[i];
        }
        
        return a == b;
    }
};