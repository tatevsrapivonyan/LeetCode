class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;

        for (int i = 0; i < nums.size(); ++i)
        {
            int count{};
            for (int j = 0; j < nums.size(); ++j)
            {
                if (nums[i] > nums[j])
                {
                    ++count;
                }
            }
            answer.push_back(count);
        }

        return answer;
    }
};