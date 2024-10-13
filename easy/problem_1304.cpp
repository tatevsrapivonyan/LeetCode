class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> answer;

        int left{ -1 };
        int right{ 1 };

        for (size_t i = 0; i < n / 2; ++i)
        {
            answer.push_back(left);
            answer.push_back(right);
            --left;
            ++right;
        }

        if (n % 2 != 0)
        {
            answer.push_back(0);
        }

        return answer;
    }
};