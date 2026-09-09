class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(int num:nums1) min1=min(num,min1);
        for(int num:nums2) min2=min(num,min2);
        return min2-min1;
    }
};