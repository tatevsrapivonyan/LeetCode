class Solution {
public:
    int countOdds(int low, int high) {
        if (low == high && high % 2 == 0)
        {
            return 0;
        }

        return (high % 2 != 0) ? (((high - low) / 2) + 1) : (((high - 1 - low) / 2) + 1); 
    }
};