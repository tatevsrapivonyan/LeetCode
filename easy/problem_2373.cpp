class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>> maxLocal;
        vector<int> inner;
        int k = 0;
        int p = 0;
        int max;

        while (k <= grid.size() - 3)
        {
            p = 0;
            while (p <= grid.size() - 3)
            {
                max = grid[k][p];
                for (int i = k; i < k + 3; ++i)
                {
                    for (int j = p; j < p + 3; ++j)
                    {
                        if (max < grid[i][j])
                        {
                            max = grid[i][j];
                        }
                    }
                }
                inner.push_back(max);
                ++p;
            }
            maxLocal.push_back(inner);
            inner.clear();
            ++k;
        }

        return maxLocal;
    }
};