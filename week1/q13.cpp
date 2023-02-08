https://www.geeksforgeeks.org/segregate-even-and-odd-numbers/

class Solution{
public:	

	void segregateEvenOdd(int a[], int n) {
	    // code here
	    sort(a,a+n);
	    queue<int> q;
	    int k=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]%2==0)
	        {
	            a[k]=a[i];
	            k++;
	        }
	        else
	        {
	            q.push(a[i]);
	        }
	    }
	     while(!q.empty())
	     {
	         a[k]=q.front();
	         q.pop();
	         k++;
	     }
	}
};
