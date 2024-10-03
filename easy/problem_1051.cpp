class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;

        sort(expected.begin(), expected.end());

        int answer{};
        for (size_t i = 0; i < expected.size(); ++i)
        {
            if (expected[i] != heights[i])
            {
                ++answer;
            }
        }

        return answer;
    }
};