class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int answer{};

        for (auto& item : items)
        {
            if (ruleKey == "type" && item[0] == ruleValue)
            {
                answer += 1;
            }
            if (ruleKey == "color" && item[1] == ruleValue)
            {
                answer += 1;
            }
            if (ruleKey == "name" && item[2] == ruleValue)
            {
                answer += 1;
            }
        }

        return answer;
    }
};