https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/



class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count=0;
        map<int,int> x,y;
        for(int i=0;i<n;i++)
        {
            x[a[i]]=1;
        }
        for(int i=0;i<m;i++)
        {
            y[b[i]]=1;
        }
        
        // for(auto j:y)
        //         {
        //             cout<<j.first<<" "<<j.second<<"\n";
        //         }cout<<"\n";
        for(auto i=x.begin();i!=x.end();i++)
        {
            if(y.find(i->first)!=y.end())
            {
                count++;
                y.erase(i->first);
                // for(auto j:y)
                // {
                //     cout<<j.first<<" "<<j.second<<"\n";
                // }cout<<"\n";
            }
            else
            {
                count++;
            }
        }
        // cout<<y.size()<<" ";
        count=count+y.size();
        
        
        
        //it will be better if we use a single map
        return count;
    }
};
