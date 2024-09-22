class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans {};

        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] < k)
            {
                ++ans;
            }
        }

        return ans;
    }
};