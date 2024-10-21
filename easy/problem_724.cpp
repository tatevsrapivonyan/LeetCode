class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<long> prefix;
        vector<long> postfix;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            int s{};
            for (size_t j = 0; j < i; ++j)
            {
                s += nums[j];
            }
            prefix.push_back(s);
            s = 0;
            for (int j = i + 1; j < nums.size(); ++j)
            {
                s += nums[j];
            }
            postfix.push_back(s);
        }

        for (size_t i = 0; i < prefix.size(); ++i)
        {
            if (prefix[i] == postfix[i])
            {
                return i;
            }
        }

        return -1;
    }
};