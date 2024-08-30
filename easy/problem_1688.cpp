class Solution {
public:
    int numberOfMatches(int n) {
        int number{};

        while (n > 1)
        {
            if (n % 2 != 0)
            {
                number += (n - 1) / 2;
                n = (n - 1) / 2 + 1;
            }
            else
            {
                number += n / 2;
                n = n / 2;
            }
        }

        return number;
    }
};