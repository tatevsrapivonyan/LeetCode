class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans {};

        for (int i = 0; i < s.size(); ++i)
        {
            int ind = t.find(s[i]);
            ans += abs(i - ind);
        }

        return ans;
    }
};