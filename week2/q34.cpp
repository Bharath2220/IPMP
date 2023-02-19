class Solution
{
    public:
    //editorial sol is somewhat good for this question
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > a, int n, int m, int x) 
    {
        // code here 
        for(int i=0;i<n;i++)
        {
            //   for(int j=0;j<a[i].size();j++)
            //   {
            //       cout<<a[i][j]<<" ";
            //   }
            //   cout<<"\n";
              int r=binary_search(a[i].begin(),a[i].end(),x);
              if(r!=0)
              return true;
        }
        return false;
    }
};