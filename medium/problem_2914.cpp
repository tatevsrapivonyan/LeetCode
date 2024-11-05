class Solution {
public:
    int minChanges(string s) {
        int steps{};

        for (size_t i = 0; i < s.size() - 1; i += 2)
        {
            if (s[i] != s[i + 1])
            {
                ++steps;
            }
        }

        return steps;
    }
};