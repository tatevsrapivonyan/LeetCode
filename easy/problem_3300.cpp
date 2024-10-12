class Solution {
public:
    int minElement(vector<int>& nums) {
        for (size_t i = 0; i < nums.size(); ++i)
        {
            int sum{};
            while (nums[i])
            {
                sum += nums[i] % 10;
                nums[i] /= 10;
            }
            nums[i] = sum;
        }

        return *min_element(nums.begin(), nums.end());
    }
};