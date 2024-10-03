class Solution {
public:
    int arraySign(vector<int>& nums) {
        short negative_nums {};
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
            {
                return 0;
            }
            if (nums[i] < 0)
            {
                ++negative_nums;
            }
        }

        if (negative_nums % 2 == 0)
        {
            return 1;
        }
        return -1;
    }
};