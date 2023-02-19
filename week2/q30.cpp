class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        
        //we can do this also by prefix method easily
        
        int left_sum=0,right_sum=0;
        int x=0,y=n-1;
        left_sum=a[x];
        right_sum=a[y];
        while(x<y)
        {
            if(left_sum>right_sum)
            {
                y--;
                if(y>=0)
                {
                    right_sum+=a[y];
                }
            }
            else if(left_sum<right_sum)
            {
                x++;
                if(x<n)
                {
                    left_sum+=a[x];
                }
            }
            else
            {
                  x++;
                  y--;
                  left_sum+=a[x];
                  right_sum+=a[y];
            }
        }
        if(x==y)
        {
            if(left_sum==right_sum)
            return x+1;
        }
        return -1;
    }

};