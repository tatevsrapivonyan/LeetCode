class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int j = digits.size() - 1;
        while (j >= 0 && digits[j] == 9)
        {
            digits[j] = 0;
            --j;
        }
        if (j < 0)
        {
            digits[j + 1] = 1;
            digits.push_back(0);
        }
        else
        {
            digits[j] += 1;
        }
        return digits;
    }
};