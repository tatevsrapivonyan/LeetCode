class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int prevSetBits = -1;
        int prevMax = INT_MIN;
        int currMax = INT_MIN;
        int currMin = INT_MAX;

        for (int num : nums) {
            int setBits = __builtin_popcount(num);
            if (setBits != prevSetBits) {
                if (prevMax > currMin)
                    return false;
                prevSetBits = setBits;
                prevMax = currMax;
                currMax = num;
                currMin = num;
            }
            else {
                currMax = max(currMax, num);
                currMin = min(currMin, num);
            }
        }
        return prevMax <= currMin;
    }
};