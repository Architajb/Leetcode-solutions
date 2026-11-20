class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        sort(nums.begin(), nums.end());
        int largest = nums[n - 1];
        for (int i = 0; i < n; i++) {
            ans += abs(largest - nums[i]);
        }
        return ans;
    }
};