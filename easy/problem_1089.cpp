class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for (size_t i = 0; i < arr.size() - 1; ++i)
        {
            if (arr[i] == 0)
            {
                for (size_t j = arr.size() - 1; j > i; --j)
                {
                    arr[j] = arr[j - 1];
                }
                arr[i + 1] = 0;
                ++i;
            }
        }
    }
};