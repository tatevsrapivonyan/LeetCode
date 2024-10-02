class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxNum {};
        int tmp{};
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 1)
            {
                ++tmp;
            }
            else
            {
                if (tmp > maxNum)
                {
                    maxNum = tmp;
                }
                tmp = 0;
            }
        }

        return tmp > maxNum ? tmp : maxNum;
    }
};