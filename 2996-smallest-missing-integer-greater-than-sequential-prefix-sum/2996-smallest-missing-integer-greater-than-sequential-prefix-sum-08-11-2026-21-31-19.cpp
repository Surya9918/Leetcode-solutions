class Solution {
public:
    int missingInteger(std::vector<int>& nums) {
        stack<int> m;

        m.push(nums[0]);

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == m.top() + 1) {
                m.push(nums[i]);
            } else {
                break; 
            }
        }
        int sum = 0;
        while (!m.empty()) {
            sum += m.top();
            m.pop();
        }
        unordered_set<int> num_set(nums.begin(), nums.end());
        while (num_set.count(sum)) {
            sum++;
        }
        return sum;
    }
};