class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int xCopy = x;

        int sum = 0;

        while (x)
        {
            sum += x % 10;
            x /= 10;
        }

        if (xCopy % sum == 0)
        {
            return sum;
        }

        return -1;
    }
};