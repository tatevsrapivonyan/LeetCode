class Solution {
public:

    string to_binary(int num)
    {
        string answer{};

        if (num == 0)
        {
            return "0";
        }
        while (num)
        {
            answer += num % 2 + '0';
            num /= 2;
        }

        reverse(answer.begin(), answer.end());

        return answer;
    }

    string convertDateToBinary(string date) {
        string new_date;

        int year{};
        int month{};
        int day{};
        int counter{};

        for (size_t i = 0; i < date.size(); ++i)
        {
            if (date[i] != '-')
            {
                if (counter == 0)
                {
                    year = year * 10 + (date[i] - '0');
                }
                else if (counter == 1)
                {
                    month = month * 10 + (date[i] - '0');
                }
                else
                {
                    day = day * 10 + (date[i] - '0');
                }
            }
            else
            {
                ++counter;
            }
        }

        new_date += to_binary(year);
        new_date += '-';
        new_date += to_binary(month);
        new_date += '-';
        new_date += to_binary(day);

        return new_date;
    }
};