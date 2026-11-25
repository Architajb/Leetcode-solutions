class Solution {
public:
    string sortVowels(string s) {
        string vowels = "";
        string ans = "";
        for (auto ch : s) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels += ch;
            }
        }
        sort(vowels.begin(),vowels.end());
        int i = 0;
        for (auto ch : s) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                ans += vowels[i];
                i++;
            } else {
                ans += ch;
            }
        }
        return ans;
    }
};