class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &a)
    {
        // code here 
        //cout<<a.size()<<" "<<a[0].size()<<"\n";
        set<int> row;
        set<int> col;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<a[0].size();j++)
            {
                  if(a[i][j]==1)
                  {
                      row.insert(i);
                      col.insert(j);
                  }
            }
        }
        for(auto i:row)
        {
            for(int j=0;j<a[0].size();j++)
            {
                a[i][j]=1;
            }
        }
        
        for(auto i:col)
        {
            for(int j=0;j<a.size();j++)
            {
                a[j][i]=1;
            }
        }
        
    }
};