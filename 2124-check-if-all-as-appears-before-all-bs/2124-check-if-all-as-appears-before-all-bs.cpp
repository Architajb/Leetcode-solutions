class Solution {
public:
    bool checkString(string s) {
        bool isSeen = false;
        for (auto ch : s) {
            if (ch == 'b') {
                isSeen = true;
            }
            if (ch == 'a' && isSeen) {
                return false;
            }
        }
        return true;
    }
};