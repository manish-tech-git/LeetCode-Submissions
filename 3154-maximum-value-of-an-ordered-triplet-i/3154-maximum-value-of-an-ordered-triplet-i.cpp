class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
         long long maxi = INT_MIN;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                for (int k = j+1; k < n; k++)
                {
                    long long curr = 1LL * (nums[i] - nums[j] )* nums[k];
                    if(curr > maxi)
                        maxi = curr;
                }
            }
        }
        
        return maxi >= 0? maxi:0;
    }
};