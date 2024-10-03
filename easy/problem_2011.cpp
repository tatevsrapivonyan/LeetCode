class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int answer{};

        for (auto& op : operations)
        {
            if (op == "++X" || op == "X++")
            {
                answer += 1;
            }
            else if (op == "--X" || op == "X--")
            {
                answer -= 1;
            }
        }

        return answer;
    }
};