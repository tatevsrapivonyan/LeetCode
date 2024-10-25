class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool inBars = false;

        for (char ch : s) {
            if (ch == '|') {
                inBars = !inBars;
            }
            else if (ch == '*' && !inBars) {
                ++count;
            }
        }

        return count;
    }
};
