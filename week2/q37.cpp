class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& a) {
        map<int,vector<int>> m;
        int n=a.size();
        int r=a[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<r;j++)
            {
                m[i+j].push_back(a[i][j]);
            }
        }
        vector<int> ans;
        for(auto i:m)
        {
            if(i.first%2!=0)
            {
                 for(int j=0;j<i.second.size();j++)
                 {
                     ans.push_back(i.second[j]);
                 }
            }
            else
            {
                for(int j=0;j<i.second.size();j++)
                 {
                     ans.push_back(i.second[i.second.size()-1-j]);
                 }
            }
        }
       return ans; 
    }
};