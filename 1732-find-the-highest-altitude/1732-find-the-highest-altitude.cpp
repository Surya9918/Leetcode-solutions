class Solution {
public:
    int largestAltitude(vector<int>& gains) {
        vector<int> n;
        n.push_back(0);
        n.push_back(gains[0]);
        int i=1;
        for(i=1;i<gains.size();i++){
            gains[i]+=gains[i-1];
            n.push_back(gains[i]);
        }
        return *max_element(n.begin(),n.end());
    }
};