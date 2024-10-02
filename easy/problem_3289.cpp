class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int, int> ans;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            ans[nums[i]] += 1;
        }

        vector<int> answer;
        for (auto& a : ans)
        {
            if (a.second > 1)
            {
                answer.push_back(a.first);
            }
        }

        return answer;
    }
};