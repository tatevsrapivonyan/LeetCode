class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer;
        vector<int> leftSum;
        vector<int> rightSum(nums.size());

        leftSum.push_back(0);
        rightSum[nums.size() - 1] = 0;
        int lSum{};
        int rSum{};
        for (int i = 1; i < nums.size(); ++i)
        {
            lSum += nums[i - 1];
            rSum += nums[nums.size() - i];
            leftSum.push_back(lSum);
            rightSum[nums.size() - i - 1] = rSum;
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            answer.push_back(abs(leftSum[i] - rightSum[i]));
        }

        return answer;
    }
};