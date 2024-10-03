class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count{};

        for (int i = 0; i < sentences.size(); ++i) {
            int b{ 1 };
            for (int j = 0; j < sentences[i].size(); ++j) {
                if (sentences[i][j] == ' ') {
                    ++b;
                }
            }
            if (b > count) {
                count = b;
            }
        }
        return count;
    }
};