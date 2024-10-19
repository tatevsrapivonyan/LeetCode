class Solution {
public:
    string reverseWords(string s) {
        string new_str;
        string ans;

        for (auto& c : s)
        {
            if (c != ' ')
            {
                new_str += c;
            }
            else
            {
                reverse(new_str.begin(), new_str.end());
                if (ans.size() != 0)
                {
                    ans += ' ';
                }
                ans += new_str;
                new_str = "";
            }
        }
        reverse(new_str.begin(), new_str.end());
        if (ans.size() != 0)
        {
            ans += ' ';
        }
        ans += new_str;

        return ans;
    }
};