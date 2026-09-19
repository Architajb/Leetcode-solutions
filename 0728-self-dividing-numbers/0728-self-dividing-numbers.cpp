class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            int dup = i;
            bool valid = true;
            while (dup > 0) {
                int digit = dup % 10;
                if (digit != 0 && (i % digit == 0)) {
                    dup /= 10;
                } else {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};