class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int dSum{};

        for (size_t i = 0; i < mat.size(); ++i)
        {
            dSum += mat[i][i];
            if (i != mat.size() - 1 - i)
            {
                dSum += mat[i][mat.size() - 1 - i];
            }
        }

        return dSum;
    }
};