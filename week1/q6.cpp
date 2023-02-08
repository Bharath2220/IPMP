https://www.interviewbit.com/problems/repeat-and-missing-number-array/

class Solution{
public:
    int *findTwoElement(int *a, int n) {
        // code here
        int *x=new int[2];
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            int p=abs(a[i]);
            if(a[p-1]>0)
            {
                a[p-1]=-1*a[p-1];
            }
            else
            {
                x[0]=abs(p);
            }
          sum=sum+p;
        }
        int l=0;
        for(int i=1;i<=n;i++)
        {
            l+=i;
        }
        x[1]=l-(sum-x[0]);
        return x;
    }
};
