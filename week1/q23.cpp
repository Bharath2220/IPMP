https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/

class Solution{
    public:
  
    bool find3Numbers(int a[], int n, int x)
    {
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            int f=i+1;
            int b=n-1;
            while(f<b)
            {
            if(a[i]+a[f]+a[b]>x)
            {
                b--;
            }
            else if(a[i]+a[f]+a[b]<x)
            {
                f++;
            }
            else
            {
                return true;
            }
            }
            if(i+1<n && a[i]==a[i+1])i++;
        }
        return false;
    }
};
