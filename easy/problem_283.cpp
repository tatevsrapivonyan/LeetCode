#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] != 0)
            {
                nums[j] = nums[i];
                ++j;
            }
        }

        for (; j < nums.size(); ++j)
        {
            nums[j] = 0;
        }
    }
};