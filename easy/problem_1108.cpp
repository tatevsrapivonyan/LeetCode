class Solution {
public:
    string defangIPaddr(string address) {
        string new_str;
        for (int i = 0; i < address.size(); ++i)
        {
            if (address[i] == '.')
            {
                new_str += "[.]";
            }
            else
            {
                new_str += address[i];
            }
        }
        return new_str;
    }
};