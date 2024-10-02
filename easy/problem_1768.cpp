class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged {};

        size_t i = 0;
        for (; i < min(word1.size(), word2.size()); ++i)
        {
            merged += word1[i];
            merged += word2[i];
        }

        while (i < word1.size())
        {
            merged += word1[i];
            ++i;
        }

        while (i < word2.size())
        {
            merged += word2[i];
            ++i;
        }

        return merged;
    }
};