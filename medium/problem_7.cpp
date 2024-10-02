class Solution {
public:
    int reverse(int x) {
        int rx {};

        if (x > 0)
        {        
            while ( rx <= numeric_limits<int>::max() && x)
            {
                if (rx > numeric_limits<int>::max() / 10)
                {
                    return 0;
                }
                rx = rx * 10 + x % 10;
                x /= 10;
            }
        }
        else if (x < 0)
        {
            while ( rx >= numeric_limits<int>::min() && x)
            {
                if (rx * -1 < numeric_limits<int>::min() / 10)
                {
                    return 0;
                }

                rx = rx * 10 - x % 10;
                x /= 10;
            }
            rx = -1 * rx;
        }

        return rx;
    }
};