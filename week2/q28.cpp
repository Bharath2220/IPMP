class Solution
{
    public:
        int closestToZero(int a[], int n)
        {
            // your code here 
            int ans=INT_MAX;
            int prev=INT_MAX;
            sort(a,a+n);
            int i=0;
            int j=n-1;
            while(i<j)
            {
                if(abs(a[i]+a[j])<prev)
                {
                    ans=a[i]+a[j];
                    prev=abs(a[i]+a[j]);
                }
                else if(abs(a[i]+a[j])==prev)
                {
                    ans=max(ans,a[i]+a[j]);
                }
                if(a[i]+a[j]>0)j--;
                else i++;
            }
            return ans;
        }
};