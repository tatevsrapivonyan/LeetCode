#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == val)
            {
                nums.erase(nums.begin() + i);
                --i;
            }
        }

        return nums.size();
    }
};