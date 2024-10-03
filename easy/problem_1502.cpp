class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int k = arr[1] - arr[0];

        for ( size_t i = 1; i < arr.size() - 1; ++i)
        {
            if (arr[i + 1] - arr[i] != k)
            {
                return false;
            }
        }
        return true;
    }
};