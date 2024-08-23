#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for (size_t i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] % 2 != 0)
            {
                for (int j = i + 1; j < nums.size(); ++j)
                {
                    if (nums[j] % 2 == 0)
                    {
                        int tmp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = tmp;
                    }
                }
            }
        }
        return nums;
    }
};