class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(), nums.end());
        for (int i=0;i<nums.size()-1;i++){
            if(nums[i]+1 != nums[i+1]){
                nums.insert(nums.begin() + i+1, nums[i]+1);
                v.push_back(nums[i]+1);
            }
        }
        return v;
    }
};