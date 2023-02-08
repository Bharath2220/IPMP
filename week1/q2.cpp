https://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/

class Solution{
    public:
    int findSingle(int n, int a[]){
        // code here
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans^a[i];
        }
        return ans;
    }
};
