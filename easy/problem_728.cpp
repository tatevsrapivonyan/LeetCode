class Solution {
public:
    bool is_self_dividing(int num)
    {
        int cpnum = num;

        while (cpnum)
        {
            if (cpnum % 10 == 0)
            {
                return false;
            }

            if (num % (cpnum % 10) != 0)
            {
                return false;
            }
            cpnum /= 10;
        }

        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        while (left <= right)
        {
            if (is_self_dividing(left))
            {
                ans.push_back(left);
            }
            ++left;
        }

        return ans;
    }
};