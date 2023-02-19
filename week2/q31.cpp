class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& a, int n) {
        //code here
        vector<long long int> left(n);
        vector<long long int> right(n);
        left[0]=1;
        long long int prod=1;
        for(int i=1;i<n;i++)
        {
             prod=prod*a[i-1];
             left[i]=prod;
        }
        right[n-1]=1;
        prod=1;
        for(int i=n-2;i>=0;i--)
        {
              prod=prod*a[i+1];
              right[i]=prod;
        }
        for(int i=0;i<n;i++)
        {
            right[i]=right[i]*left[i];
        }
         
        return right;
    }
};