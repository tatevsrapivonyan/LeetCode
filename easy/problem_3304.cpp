class Solution {
public:
    char kthCharacter(int k) {
        int length = 1;

        while (length < k) {
            length *= 2;
        }

        char current_char = 'a';
        while (length > 1) {
            int half_length = length / 2;

            if (k > half_length) {
                k -= half_length;
                current_char = (current_char == 'z') ? 'a' : current_char + 1;
            }
            length = half_length;
        }

        return current_char;
    }
};