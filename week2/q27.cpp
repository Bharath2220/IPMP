class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int ans=0;
        int count=0;
        int global_count=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    count++;
                }
            }
            if(global_count>count)
            {
                 global_count=count;
                 ans=i+1;
            }
            //cout<<global_count<<"*"<<"\n";
            count=0;
        }
        return ans;
    }
};