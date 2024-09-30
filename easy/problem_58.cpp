class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastOne{};

        for (int i = s.size() - 1; i >= 0; --i)
        {
            if (lastOne == 0 && s[i] == ' ')
            {
                continue;
            }
            else if (s[i] != ' ')
            {
                ++lastOne;
            }
            else
            {
                break;
            }
        }

        return lastOne;
    }
};