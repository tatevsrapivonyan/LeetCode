class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> answer;

        for (size_t i = 0; i < nums.size() - 1; ++i)
        {
            while (nums[i])
            {
                answer.push_back(nums[i + 1]);
                --nums[i];
            }
            ++i;
        }

        return answer;
    }
};