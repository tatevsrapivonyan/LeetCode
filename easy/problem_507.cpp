class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1)
        {
            return false;
        }

        int ans{ 1 };
        int div{ 2 };

        while (div < sqrt(num))
        {
            if (num % div == 0)
            {
                ans += div;
                ans += (num / div);
            }
            ++div;
        }
        return ans == num;
    }
};