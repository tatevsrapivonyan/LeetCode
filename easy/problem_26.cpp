#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for (size_t i = 0; i < nums.size() - 1; ++i)
        {
            for (size_t j = i + 1; j < nums.size(); ++j)
            {
                if (nums[i] == nums[j])
                {
                    nums.erase(nums.begin() + j);
                    --j;
                }
                else
                {
                    break;
                }
            }
        }
        return nums.size();
    }
};