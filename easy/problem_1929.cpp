class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};