class Solution {
public:
    int longestContinuousSubstring(string s) {

        int j = 0;
        int maxi = INT_MIN;
        int cnt = 1;
        //if(s.size() == 1) return 1;
        for (int i = 1; i< s.size(); i++){
            if(s[i] - s[j] == 1){
            cnt++;
            maxi  = max (maxi, cnt);
            j++;
            }
            else{
                j = i;
                 cnt = 1;
            }
        }

        maxi = max(maxi, cnt);
        return maxi;

        
        
    }
};