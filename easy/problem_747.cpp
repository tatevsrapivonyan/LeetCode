class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());

        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (mx != nums[i] && mx < nums[i] * 2)
            {
                return -1;
            }
        }

        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == mx)
            {
                return i;
            }
        }

        return -1;
    }
};