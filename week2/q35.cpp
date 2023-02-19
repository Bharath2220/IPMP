class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > a, int r, int c) 
    {
        // code here 
        int x=0,y=c-1,z=r-1,w=0;
        vector<int> v;
        int k=r*c;
        while(k>0)
        {
            if(k>0)
            {
             for(int i=w;i<=y;i++)
             {
                 v.push_back(a[x][i]);
                 k--;
             }
             x++;
            }
            if(k>0)
            {
             for(int i=x;i<=z;i++)
             {
                 v.push_back(a[i][y]);
                 k--;
             }
             y--;
            }
            if(k>0)
            {
             for(int i=y;i>=w;i--)
             {
                 v.push_back(a[z][i]);
                 k--;
             }
             z--;
            }
            if(k>0)
            {
             for(int i=z;i>=x;i--)
             {
                 v.push_back(a[i][w]);
                 k--;
             }
             w++;
            }
            // cout<<k<<"******\n";
        }
        return v;
    }
};