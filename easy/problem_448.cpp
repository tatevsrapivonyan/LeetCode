class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int, int> answer;
        vector<int> ans;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i)
        {
            answer[i + 1] = 0;
        }

        for (size_t i = 0; i < nums.size(); ++i)
        {
            answer[nums[i]] += 1;
        }

        for (auto& a : answer)
        {
            if (a.second == 0)
            {
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};