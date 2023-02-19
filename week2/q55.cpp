    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int maxi=a[n-1];
        vector<int> v;
        for(int i=n-1;i>=0;i--)
        {
             if(a[i]>=maxi)
             {
                 maxi=a[i];
                 v.push_back(a[i]);
             }
             
        }
        for(int i=0;i<v.size()/2;i++)
        {
            swap(v[i],v[v.size()-1-i]);
        }
        return v;
    }
};