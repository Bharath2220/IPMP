https://www.geeksforgeeks.org/move-zeroes-end-array/

class Solution{
public:
	void pushZerosToEnd(int a[], int n) {
	    // code here
	    int count=0;
	    int k=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==0)
	        count++;
	        else
	        {
	            a[k]=a[i];
	            k++;
	        }
	    }
	    while(count>0)
	    {
	        a[k]=0;
	        k++;
	        count--;
	    }
	}
};
