class Solution {
public:
    int climbStairs(int n) 
    {
        if( n == 1 || n ==0 ) return 1;
        int first = 1 , second =1,ways;
        for (int i=2;i<=n;i++)
        {
            ways    = first + second;
            second  = first;
            first   = ways;

        }
            
        return ways;
        
    }
};