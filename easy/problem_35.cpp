class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        int index{ -1 };
        if (target <= nums[0])
        {
            return 0;
        }
        if (target > nums[nums.size() - 1])
        {
            return nums.size();
        }

        while (low < high)
        {
            int mid = low + (high - low) / 2;

            if (target == nums[mid])
            {
                return mid;
            }

            if (target > nums[mid])
            {
                low = mid + 1;
                if (mid < nums.size() && target <= nums[mid + 1])
                {
                    index = mid + 1;
                }
                if (mid == nums.size())
                {
                    index = mid;
                }
            }

            if (target < nums[mid])
            {
                high = mid - 1;
                if (mid > 0)
                {
                    if (target > nums[mid - 1])
                    {
                        index = mid;
                    }
                    if (target == nums[mid - 1])
                    {
                        index = mid - 1;
                    }
                }
                if (mid == 0)
                {
                    index = mid;
                }
            }
        }
        return index;
    }
};