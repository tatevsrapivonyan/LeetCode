class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> new_num;
        int i = 0;
        int j = 0;
        double answer{};

        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                new_num.push_back(nums1[i]);
                ++i;
            }
            else
            {
                new_num.push_back(nums2[j]);
                ++j;
            }
        }

        while (i < nums1.size())
        {
            new_num.push_back(nums1[i]);
            ++i;
        }

        while (j < nums2.size())
        {
            new_num.push_back(nums2[j]);
            ++j;
        }

        if (new_num.size() % 2 == 0)
        {
            answer = (new_num[new_num.size() / 2] + new_num[(new_num.size() / 2) - 1]) / 2.0;
        }
        else
        {
            answer = new_num[new_num.size() / 2];
        }

        return answer;
    }
};