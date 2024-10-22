class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        size_t size = nums.size();
        vector<int> answer;

        for (size_t i = 0; i < size; ++i)
        {
            answer.insert(answer.begin() + index[i], nums[i]);
        }

        return answer;
    }
};