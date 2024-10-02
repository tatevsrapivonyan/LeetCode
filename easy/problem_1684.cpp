class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count{};

        for (auto& word : words)
        {
            bool check{ true };

            for (auto& w : word)
            {
                if (find(allowed.begin(), allowed.end(), w) == allowed.end())
                {
                    check = false;
                }
            }

            if (check)
            {
                ++count;
            }
        }
        return count;
    }
};