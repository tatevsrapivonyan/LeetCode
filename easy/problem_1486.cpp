class Solution {
public:
    int xorOperation(int n, int start) {
        int answer{};

        for (int i = 0; i < n; ++i)
        {
            answer ^= start + 2 * i;
        }

        return answer;
    }
};