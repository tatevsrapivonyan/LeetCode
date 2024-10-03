class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> wealth;

        for (int i = 0; i < accounts.size(); ++i)
        {
            int s{};
            for (int j = 0; j < accounts[i].size(); ++j)
            {
                s += accounts[i][j];
            }
            wealth.push_back(s);
        }

        return *max_element(wealth.begin(), wealth.end());
    }
};