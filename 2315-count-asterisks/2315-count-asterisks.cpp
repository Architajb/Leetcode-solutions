class Solution {
public:
    int countAsterisks(string s) {
        int cnt=0;
        int bar=0;
        for(char ch:s){
            if(ch == '|'){
                bar++;
            }
            if(bar%2==0 && ch == '*'){
                cnt++;
            }
        }
        return cnt;
    }
};