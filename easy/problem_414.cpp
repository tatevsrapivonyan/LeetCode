class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.begin() + nums.size());
        nums.resize(distance(nums.begin(), it));

        if (nums.size() < 3)
        {
            return nums[nums.size() - 1];
        }

        return nums[nums.size() - 3];
    }
};