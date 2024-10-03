class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count{};

        for (int i = 0; i < nums.size(); ++i)
        {
            if ((nums[i] + 1) % 3 == 0 || (nums[i] - 1) % 3 == 0)
            {
                ++count;
            }
        }

        return count;
    }
};