class Solution{
public:
	vector<int> generateNextPalindrome(int a[], int n) {
	    // code here
	    if(n==1 && a[0]==9)
	    {
	        return {1,1};
	    }
	    vector<int> ans;
	    int i=0;int j=n-1;
	    int flag=0;
	    while(i<=j)
	    {
	        ans.push_back(a[i]);
	        if(a[i++]==a[j--])
	        continue;
	        flag=(a[i-1]>a[j+1]);
	    }
	    int left=(n-1)/2;
	    if(flag==0)
	    {
	         while(left>0 && ans[left]==9)
	         {
	             ans[left]=0;
	             left--;
	         }
	   if(ans[left]==9)
	    {
	        ans[left]=0;
	        ans.insert(ans.begin(),1);
	    }
	    else
	    ans[left]++;
	    }
	    if(n%2==0 && (ans.size()<2||!(a[0]==1&&a[1]==0)))
	    {
	        int n=ans.size();
	        for(int i=n-1;i>=0;i--)
	        {
	            ans.push_back(ans[i]);
	        }
	    }
	    else
	    {
	        int n=ans.size();
	        for(int i=n-2;i>=0;i--)
	        {
	            ans.push_back(ans[i]);
	        }
	    }
	   return ans;
	}

};
