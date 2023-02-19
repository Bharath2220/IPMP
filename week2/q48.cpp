class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
         if(k<=1)
         return 0;
         int i=0;
         int j=0;
         int prod=1;
         int n=a.size();
         int count=0;
         while(i<n && j<n)
         {
              prod=prod*a[j];
              if(prod<k)
              {
                  count+=j-i+1;
              }
              else
              {
                  while(prod>=k)
                  {
                      prod=prod/a[i];
                      i++;
                  }
                  count+=j-i+1;
              }
              j++;
         }
      return count;   
     
    }
};