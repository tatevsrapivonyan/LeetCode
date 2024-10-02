class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans {};

        for (int i = 0; i < nums.size(); ++i)
        {
            int tmp{};
            while (nums[i])
            {
                ++tmp;
                nums[i] /= 10;
            }

            if (tmp % 2 == 0)
            {
                ++ans;
            }
        }

        return ans;
    }
};