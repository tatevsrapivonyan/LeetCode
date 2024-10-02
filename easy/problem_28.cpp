class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() > haystack.size())
        {
            return -1;
        }

        int first{ -1 };

        for (size_t i = 0; i < haystack.size(); ++i) {
            if (haystack[i] == needle[0]) {
                size_t j = 1;
                size_t p = i + 1;
                while (p < haystack.size() && j < needle.size()) {
                    if (haystack[p] != needle[j]) {
                        break;
                    }
                    ++p;
                    ++j;
                }
                if (j == needle.size())
                {
                    first = i;
                    break;
                }
            }
        }
        return first;
    }
};