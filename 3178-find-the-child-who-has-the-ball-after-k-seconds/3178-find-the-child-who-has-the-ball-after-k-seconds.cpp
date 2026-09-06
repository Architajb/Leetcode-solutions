class Solution {
public:
    int numberOfChild(int n, int k) {
        int cycle = 2 * (n - 1);
        int t = k % cycle;
        if (t <= n-1) {
            return t;
        } else {
            return 2 * n - t - 2;
        }
    }
};