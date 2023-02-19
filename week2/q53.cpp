class Solution {
public:
    int maxProfit(vector<int>& a) {
        int prof=0;
        for(int i=1;i<a.size();i++)
        {
            if(a[i]>a[i-1])
            {
                prof+=a[i]-a[i-1];
            }
        }
        return prof;
    }
};