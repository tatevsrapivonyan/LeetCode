class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int answer{};

        for (size_t i = 0; i < nums.size(); ++i)
        {
            int mx{};
            int cnums{ nums[i] };
            while (nums[i])
            {
                if (nums[i] % 10 > mx)
                {
                    mx = nums[i] % 10;
                }
                nums[i] /= 10;
            }

            while (cnums)
            {
                nums[i] = nums[i] * 10 + mx;
                cnums /= 10;
            }
        }

        for (size_t i = 0; i < nums.size(); ++i)
        {
            answer += nums[i];
        }

        return answer;
    }
};