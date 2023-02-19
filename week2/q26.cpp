class Solution{
  public:
    vector<int> find3Numbers(vector<int> a, int n) {
        // Your code here
        vector<int> mini(n);
        vector<int> maxi(n);
        int min_ele=INT_MAX;
        int max_ele=INT_MIN;
        for(int i=1;i<n;i++)
        {
             min_ele=min(a[i-1],min_ele);
             mini[i]=min_ele;
        }
        for(int i=n-2;i>=0;i--)
        {
            max_ele=max(a[i+1],max_ele);
            maxi[i]=max_ele;
        }
        for(int i=1;i<n-1;i++)
        {
            if(mini[i]<a[i]&&a[i]<maxi[i])
            {
                return {mini[i],a[i],maxi[i]};
            }
        }
        return {};
    }
};
