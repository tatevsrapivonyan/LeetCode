class Solution {
public:
    string makeFancyString(string s) {
        string str;
        int count{ 1 };
        str += s[0];

        for (size_t i = 1; i < s.size(); ++i)
        {
            if (s[i] == s[i - 1])
            {
                ++count;
            }
            else
            {
                count = 1;
            }
            if (count < 3)
            {
                str += s[i];
            }
        }
        return str;
    }
};