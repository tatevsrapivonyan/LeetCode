class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans{};

        for (size_t i = 0; i < nums.size() - 1; ++i)
        {
            for (size_t j = i + 1; j < nums.size(); ++j)
            {
                if (abs(nums[i] - nums[j]) == k)
                {
                    ++ans;
                }
            }
        }

        return ans;
    }
};