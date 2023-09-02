class Solution {
public:

    bool sumeven (int n)
    {
        int sum = 0;
        while(n)
        {
            int rem  = n % 10;
            sum  = sum + rem;
            n =  n / 10;

        }
        if(sum % 2 == 0) return true;
        return false;
    }
    int countEven(int num) {

        int count = 0;

        for (int i = 2; i <= num; i++)
        {
            if(sumeven(i)) count++;
        }
        
        return count;
    }
};