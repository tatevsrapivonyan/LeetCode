class Solution {
public:
    double myPow(double x, int n) {
        double answer{ 1.0 };
        long new_n{ n };
        if (n < 0)
        {
            x = 1 / x;
            new_n = -static_cast<long>(n);
        }
        while (new_n)
        {
            if (new_n % 2 == 1)
            {
                answer *= x;
            }
            x *= x;
            new_n /= 2;
        }

        return answer;
    }
};