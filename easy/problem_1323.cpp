class Solution {
public:
    int maximum69Number(int num) {
        string snum = to_string(num);

        for (auto& s : snum)
        {
            if (s == '6')
            {
                s = '9';
                return stoi(snum);
            }
        }

        return num;
    }
};