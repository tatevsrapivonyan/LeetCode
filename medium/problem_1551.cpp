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