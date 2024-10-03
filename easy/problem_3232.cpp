class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int aliceSum{};
        int bobSum{};

        for (auto& num : nums)
        {
            if (num >= 10)
            {
                aliceSum += num;
            }
            else
            {
                bobSum += num;
            }
        }

        return bobSum != aliceSum;
    }
};