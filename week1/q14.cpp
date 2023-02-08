https://www.geeksforgeeks.org/rearrange-positive-and-negative-numbers-publish/

class Solution{
public:

	void rearrange(int a[], int n) {
	    // code here
	    queue<int> q,r;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<0)
	        {
	            q.push(a[i]);
	        }
	        else
	        {
	            r.push(a[i]);
	        }
	    }
	    int flag=0;
	    int k=0;
	    while(!q.empty()&&!r.empty())
	    {
	         if(flag==0)
	         {
	             a[k]=r.front();
	             r.pop();
	             k++;
	             flag=1;
	         }
	         else
	         {
	             a[k]=q.front();
	             q.pop();
	             k++;
	             flag=0;
	         }
	        
	    }
	    while(!r.empty())
	    {
	          a[k]=r.front();
	          r.pop();
	          k++;
	    }
	    while(!q.empty())
	    {
	          a[k]=q.front();
	          q.pop();
	          k++;
	    }
	}
};
