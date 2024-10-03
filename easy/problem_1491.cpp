class Solution {
public:
    double average(vector<int>& salary) {
        int min {salary[0]};
        int max {salary[0]};
        double ans {};

        for (size_t i = 1; i < salary.size(); ++i)
        {
            if (salary[i] > max)
            {
                max = salary[i];
            }
            if (salary[i] < min)
            {
                min = salary[i];
            }
        }

        for (size_t i = 0; i < salary.size(); ++i)
        {
            if (salary[i] != min && salary[i] != max)
            {
                ans += salary[i];
            }
        }

        return ans / (salary.size() - 2);
    }
};