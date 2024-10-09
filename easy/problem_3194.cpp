class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> averages;

        sort(nums.begin(), nums.end());

        for (size_t i = 0; i < nums.size(); ++i)
        {
            averages.push_back((nums[i] + nums[nums.size() - 1 - i]) / 2.0);
        }

        return *min_element(averages.begin(), averages.end());
    }
};