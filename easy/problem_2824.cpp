class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count{};

        for (int i = 0; i < nums.size() - 1; ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if (nums[i] + nums[j] < target)
                {
                    ++count;
                }
            }
        }
        return count;
    }
};