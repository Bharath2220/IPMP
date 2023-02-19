class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	      long long int maxp = INT_MIN;
       long long  int prod = 1;


        for(int i=0; i<n; i++){
            prod = prod * arr[i];
            maxp = max(maxp , prod);
            if(prod == 0){
                prod = 1;
            }
        }
        
            prod = 1;
        for(int i=n-1; i >= 0; i--){
            prod = prod * arr[i];
            maxp = max(maxp , prod);
            
            if(prod == 0){
                prod = 1;
            }
        }
        return maxp;
	}
};