https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int a[], int n, int x) {
	    // code here
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    {
	        if(m[x-a[i]]==0)
	        {
	            m[a[i]]++;
	        }
	        else{
	            return true;
	        }
	    }
	   // for(int i=0;i<n;i++)
	   // {
	   //     if(x-a[i]!=a[i])
	   //     {
	   //     if(m[x-a[i]]!=0)
	   //     return true;
	   //     }
	   //     if(x-a[i]==a[i])
	   //     {  
	   //         if(m[a[i]]>=2)
	   //         {
	   //            return true;
	   //         }
	   //     }
	   // }
	    return false;
	}
};
