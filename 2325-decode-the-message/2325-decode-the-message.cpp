class Solution {
public:
    string decodeMessage(string key, string message) {
        int mp[26] = {0};
        char ch = 'a';
        for (char c : key) {
            if (c == ' ')
                continue;
            if (mp[c - 'a'] == 0) {
                mp[c - 'a'] = ch;
                ch++;
            }
        }
        string ans = "";
        for (char c : message) {
            if (c == ' ')
                ans += ' ';
            else
                ans += mp[c - 'a'];
        }
        return ans;
    }
};