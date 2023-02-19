class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>a, int n, long long s)
    {
        // Your code here
        if(s<=0)
        {
            return {-1};
        }
        int sum=0;
        int left=0;
        int right=0;
        for(int i=0;i<n;i++)
        {
              sum=sum+a[right];
              if(sum<s)
              {
                  right++;
                 continue; 
              }
              else if(sum==s)
              {
                  return {left+1,right+1};
              }
              else
              {
                  while(sum>s)
                  {
                      sum=sum-a[left];
                      left++;
                  }
                  if(sum==s)
                  {
                      return {left+1,right+1};
                  }
              }
              right++;
        }
        return {-1};
    }
};