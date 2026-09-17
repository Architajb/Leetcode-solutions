class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        ans.push_back(1);
        long long element=1;
        for(int i=0;i<rowIndex;i++){
            element = element * (rowIndex-i);
            element = element / (i+1);
            ans.push_back(element);
        }
        return ans;
    }
};