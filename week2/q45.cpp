class Solution
{
    public:
    int ways(int a[],int start,int end,vector<int> &dp)
    {
        if(start==end)
        {
            return a[start];
        }
      
        if(start>end)
        {
            return 0;
        }
        if(dp[start]!=-1)
        {
            return dp[start];
        }
        int x=a[start]+ways(a,start+2,end,dp);
        int y=a[start+1]+ways(a,start+3,end,dp);
        return dp[start]=max(x,y);
    
    }
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int a[], int n)
    {
        // Your code here
        vector<int> dp(10001,-1);
       return ways(a,0,n-1,dp);
    }
};