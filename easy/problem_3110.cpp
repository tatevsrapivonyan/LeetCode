class Solution {
public:
    int scoreOfString(string s) {
        int score {};

        for (int i = 0; i < s.size() - 1; ++i)
        {
            score += abs(s[i] - s[i + 1]);
        }
        return score;
    }
};