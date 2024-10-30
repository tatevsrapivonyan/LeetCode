class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority{};
        unordered_map<int, int> elements;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            elements[nums[i]] += 1;
        }

        for (auto& element : elements)
        {
            if (element.second > nums.size() / 2)
            {
                majority = element.first;
            }
        }

        return majority;
    }
};