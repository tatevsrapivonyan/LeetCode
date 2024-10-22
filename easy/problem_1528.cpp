class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        size_t size = indices.size();
        string str(size, ' ');

        for (size_t i = 0; i < size; ++i)
        {
            str[indices[i]] = s[i];
        }

        return str;
    }
};