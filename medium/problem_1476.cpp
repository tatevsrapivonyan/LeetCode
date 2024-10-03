class SubrectangleQueries {
    vector<vector<int>> rectangle;
public:
    SubrectangleQueries(vector<vector<int>>& rectangl) {
        rectangle = rectangl;
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        for (size_t i = row1; i <= row2; ++i)
        {
            for (size_t j = col1; j <= col2; ++j)
            {
                rectangle[i][j] = newValue;
            }
        }
    }

    int getValue(int row, int col) {
        return rectangle[row][col];
    }
};