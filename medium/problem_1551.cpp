class Solution {
public:
    int minOperations(int n) {
        int answer{ };
        while (n >= 1)
        {
            answer += (n - 1);
            n -= 2;
        }
        return answer;
    }
};

//Version 2 

class Solution {
public:
    int minOperations(int n) {
        if (n % 2 == 0)
        {
            return n / 2 * n / 2;
        }

        return (n - 1) / 2 * (n + 1) / 2;
    }
};