class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int a[], int n)
    {
        //Your code here
        map<int,int> m;
        int b[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
            if(sum==0)
            {
                return true;
            }
            if(m.find(sum)!=m.end())
            {
                return true;
            }
            else
            {
                b[i]=sum;
                m[b[i]]=1;
            }
        }
        return false;
    }
};