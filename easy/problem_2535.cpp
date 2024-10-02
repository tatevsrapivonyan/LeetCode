class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum{};
        int dsum{};

        for (size_t i = 0; i < nums.size(); ++i)
        {
            sum += nums[i];

            while (nums[i])
            {
                dsum += nums[i] % 10;
                nums[i] /= 10;
            }
        }

        return abs(sum - dsum);
    }
};