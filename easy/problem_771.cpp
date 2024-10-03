class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count {};

        for (int i = 0; i < stones.size(); ++i)
        {
            if (jewels.find(stones[i]) != string::npos)
            {
                ++count;
            }
        }

        return count;
    }
};