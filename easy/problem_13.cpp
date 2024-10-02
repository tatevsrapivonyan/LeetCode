class Solution {
public:
    int romanToInt(string s) {
        int s_to_num {};
        size_t i = 0;
        for (; i < s.size() - 1; ++i)
        {
            if (s[i] =='I')
            {
                if (s[i + 1] == 'V')
                {
                    s_to_num += 4;
                    ++i;
                    continue;
                }
                if (s[i + 1] == 'X')
                {
                    s_to_num += 9;
                    ++i;
                    continue;
                }
                s_to_num += 1;
            }
            if (s[i] == 'X')
            {
                if (s[i + 1] == 'L')
                {
                    s_to_num += 40;
                    ++i;
                    continue;
                }
                if (s[i + 1] == 'C')
                {
                    s_to_num += 90;
                    ++i;
                    continue;
                }
                s_to_num += 10;
            }
            if (s[i] == 'C')
            {
                if (s[i + 1] == 'D')
                {
                    s_to_num += 400;
                    ++i;
                    continue;
                }
                if (s[i + 1] == 'M')
                {
                    s_to_num += 900;
                    ++i;
                    continue;
                }
                s_to_num += 100;
            }
            if (s[i] == 'V')
            {
                s_to_num += 5;
            }
            if (s[i] == 'L')
            {
                s_to_num += 50;
            }
            if (s[i] == 'D')
            {
                s_to_num += 500;
            }
            if (s[i] == 'M')
            {
                s_to_num += 1000;
            }
        }
        if (s[i] == 'I')
        {
            s_to_num += 1;
        }

        if (s[i] == 'V')
        {
            s_to_num += 5;
        }

        if (s[i] == 'X')
        {
            s_to_num += 10;
        }

        if (s[i] == 'L')
        {
            s_to_num += 50;
        }

        if (s[i] == 'C')
        {
            s_to_num += 100;
        }

        if (s[i] == 'D')
        {
            s_to_num += 500;
        }

        if (s[i] == 'M')
        {
            s_to_num += 1000;
        }

        return s_to_num;
    }
};