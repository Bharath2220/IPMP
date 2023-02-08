https://www.geeksforgeeks.org/find-the-missing-number/

class Solution{
  public:
   int MissingNumber(vector<int>& a, int n) {
       int sum=0;
       int k=a.size();
       for(int i=0;i<k;i++)
       {
           sum=sum+a[i];
       }
       return ((n*(n+1))/2)-sum;
   }
 };
