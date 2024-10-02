class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        size_t j = 0;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] % 2 == 0)
            {
                int tmp = nums[j];
                nums[j] = nums[i];
                nums[i] = tmp;
                ++j;
            }
        }
        return nums;
    }
};