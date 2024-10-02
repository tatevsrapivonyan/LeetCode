class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> tmp;

        while (nums.size())
        {
            vector<int> temp;
            for (size_t i = 0; i < nums.size(); ++i)
            {
                if (find(temp.begin(), temp.end(), nums[i]) == temp.end())
                {
                    temp.push_back(nums[i]);
                }
                else
                {
                    tmp.push_back(nums[i]);
                }
            }
            nums = tmp;
            tmp.clear();
            answer.push_back(temp);
        }

        return answer;
    }
};