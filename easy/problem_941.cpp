class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if (arr.size() < 3)
        {
            return false;
        }

        int i{ 1 };
        int j{ static_cast<int>(arr.size() - 1) };

        while (i < arr.size() && arr[i] > arr[i - 1])
        {
            ++i;
        }

        while (j > 0 && arr[j] < arr[j - 1])
        {
            --j;
        }

        if (i != arr.size() && j != 0 && i - 1 == j)
        {
            return true;
        }

        return false;
    }
};