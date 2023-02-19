class Solution {
public:
    void rotate(vector<vector<int>>& v) {
      int n=v.size();
      int m=v[0].size();
      for(int i=0;i<n;i++)
      {
            for(int j=i;j<m;j++)
            {
                swap(v[j][i],v[i][j]);
            }
      }
      for(int i=0;i<n;i++)
      {
            reverse(v[i].begin(),v[i].end());
      }
    }
};