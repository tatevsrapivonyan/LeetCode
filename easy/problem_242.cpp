class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> um1, um2;

        for (auto c : t)
        {
            um1[c]++;
        }

        for (auto c : s)
        {
            um2[c]++;
        }

        if (um1.size() != um2.size())
        {
            return false;
        }

        for (auto& u : um1)
        {
            if (um2.find(u.first) == um2.end())
            {
                return false;
            }
            else if (u.second != um2[u.first])
            {
                return false;
            }
        }

        return true;
    }
};