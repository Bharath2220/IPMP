class Solution {
public:
    int maxAscendingSum(vector<int>& a) {
        int ans=0;
        int sum=a[0];
        for(int i=1;i<a.size();i++)
        {
            if(a[i]>a[i-1])
            {
                sum+=a[i];
            }
            else
            {
                  ans=max(ans,sum);
                  sum=a[i];
            }
        }
        ans=max(ans,sum);
        return ans;
    }
};