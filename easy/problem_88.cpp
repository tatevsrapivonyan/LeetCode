#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        size_t i = 0;
        size_t j = 0;
        size_t k = 0;
        vector<int> arr(m);
        arr = nums1;

        while (i < m && j < n)
        {
            if (arr[i] < nums2[j])
            {
                nums1[k] = arr[i];
                ++i;
            }
            else
            {
                nums1[k] = nums2[j];
                ++j;
            }
            ++k;
        }

        while (i < m)
        {
            nums1[k] = arr[i];
            ++i;
            ++k;
        }

        while (j < n)
        {
            nums1[k] = nums2[j];
            ++j;
            ++k;
        }
    }
};