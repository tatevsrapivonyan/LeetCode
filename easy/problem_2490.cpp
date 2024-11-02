class Solution {
public:
    bool isCircularSentence(string sentence) {
        if (sentence[0] != sentence[sentence.size() - 1])
        {
            return false;
        }

        for (size_t i = 1; i < sentence.size() - 1; ++i)
        {
            if (sentence[i] == ' ')
            {
                if (sentence[i - 1] != sentence[i + 1])
                {
                    return false;
                }
            }
        }

        return true;
    }
};