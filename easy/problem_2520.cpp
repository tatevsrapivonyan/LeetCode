class Solution {
public:
    int countDigits(int num) {
        int ans{};
        int val{ num };

        while (num)
        {
            int s = num % 10;

            if (val % s == 0)
            {
                ++ans;
            }

            num /= 10;
        }
        return ans;
    }
};