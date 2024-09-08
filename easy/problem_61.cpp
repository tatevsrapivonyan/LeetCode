#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; --i)
        {
            if (digits[i] < 9)
            {
                digits[i] += 1;
                return digits;
            }
            else
            {
                int j{ i };
                while (j >= 0 && digits[j] == 9)
                {
                    digits[j] = 0;
                    --j;
                }
                if (j < 0)
                {
                    digits[j + 1] = 1;
                    digits.push_back(0);
                }
                else
                {
                    digits[j] += 1;
                }
                return digits;
            }
        }
        return digits;
    }
};