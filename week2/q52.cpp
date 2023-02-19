class Solution {
public:
    int maxProfit(vector<int>& a) {
        int ans=0;
        int buy=a[0];
        for(int i=0;i<a.size();i++)
        {
            if(a[i]<buy)
            {
                buy=a[i];         //it's like for getting minimum buy price
            }
            else
            {
                  ans=max(ans,a[i]-buy);
            }
        }
        return ans;
    }
};