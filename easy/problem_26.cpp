class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        size_t j = 0;

        for (size_t i = 1; i < nums.size(); ++i)
        {
            if (nums[j] != nums[i])
            {
                ++j;
                nums[j] = nums[i];
            }
        }
        return j + 1;
    }
};