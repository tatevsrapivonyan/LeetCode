class Solution {
public:
    string interpret(string command) {
        string answer {};

        for (size_t i = 0; i < command.size(); ++i)
        {
            if (command[i] == 'G')
            {
                answer += 'G';
            }
            else if (command[i] == '(')
            {
                if (i + 1 < command.size() && command[i + 1] == ')')
                {
                    answer += 'o';
                    i += 1;
                }
                else if (i + 3 < command.size() && command[i + 1] == 'a' && command[i + 2] == 'l' && command[i + 3] == ')')
                {
                    answer += "al";
                    i += 2;
                }
            }
        }

        return answer;
    }
};