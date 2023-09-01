class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int n = citations.size();
        int low = 0;
        int mid;
        int high = n - 1;
        sort(citations.begin(), citations.end());

        while (low <= high){

            mid = low + (high - low) / 2;

            if(citations[mid] == (n - mid))
                return citations[mid];

            else if(citations[mid] > (n-mid))
                high = mid - 1;
            
            else 
                low = mid + 1;
        }

        return n-low;

    }
};