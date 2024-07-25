// Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return false;
        }

        long rx;
        int cx = x;
        while (x)
        {
            rx = rx * 10 + x % 10;
            x /= 10;
        }
        if (rx == cx)
        {
            return true;
        }
        return false;
    }
};