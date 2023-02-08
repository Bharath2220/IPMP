https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

class Solution
{
   public:
    int findSum(int a[], int n)
    {
    	//code here.
    	int maxi=INT_MIN;
    	int mini=INT_MAX;
    	for(int i=0;i<n;i++)
    	{
    	    maxi=max(maxi,a[i]);
    	    mini=min(mini,a[i]);
    	}
    	return maxi+mini;
    }

};
