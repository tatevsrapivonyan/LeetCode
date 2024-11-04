class Solution {
public:
    string compressedString(string word) {
        string comp;
        int count{ 1 };

        for (size_t i = 1; i < word.size(); ++i)
        {
            if (count == 9 || word[i - 1] != word[i])
            {
                comp += to_string(count) + word[i - 1];
                count = 1;
            }
            else
            {
                ++count;
            }
        }

        comp += to_string(count) + word.back();
        return comp;
    }
};