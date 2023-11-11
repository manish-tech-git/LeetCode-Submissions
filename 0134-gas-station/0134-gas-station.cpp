class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int total = 0;
        int temp = 0;
        int index = 0;
        for (int i = 0; i < gas.size(); i++)
        {
            int diff = gas[i] - cost[i];
            total += diff;
            temp += diff;

            if(temp < 0)
            {
                index = i+1;
                temp = 0;
            }



            
        }
        return total < 0 ? -1:index;
        
    }
};