class Solution {
public:
    int possibleStringCount(string word) {
        int count{ 1 };

        for (size_t i = 1; i < word.size(); ++i)
        {
            if (word[i - 1] == word[i])
            {
                ++count;
            }
        }

        return count;
    }
};