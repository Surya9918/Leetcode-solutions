class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a=0;
        int b=0;
        while(a<s.length()&&b<t.length()){
            if(s[a]==t[b]){
                a++;
            }
            b++;
        }
        return a==s.length();
        
    }
};