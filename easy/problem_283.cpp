#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (size_t i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] == 0)
            {
                int j = i + 1;
                while (j < nums.size())
                {
                    if (nums[j] != 0)
                    {
                        int tmp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = tmp;
                        break;
                    }
                    ++j;
                }
            }
        }
    }
};