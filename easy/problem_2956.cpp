class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int answer1{};
        int answer2{};

        for (size_t i = 0; i < nums1.size(); ++i)
        {
            if (find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end())
            {
                ++answer1;
            }
        }

        for (size_t j = 0; j < nums2.size(); ++j)
        {
            if (find(nums1.begin(), nums1.end(), nums2[j]) != nums1.end())
            {
                ++answer2;
            }
        }

        return { answer1, answer2 };
    }
};