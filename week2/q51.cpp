class Solution {
public:
    int trap(vector<int>& a) {
         int i=0;
         int j=a.size()-1;
         int left=0;
         int right=0;
         int ans=0;
         while(i<j)
         {
               if(a[i]<a[j])
               {
                    if(a[i]>=left)
                    {
                        left=a[i];
                    }
                    else
                    {
                         ans=ans+left-a[i];
                    }
                    i++;
               }
               else
               {
                   if(a[j]>=right)
                   {
                       right=a[j];
                   }
                   else
                   {
                       ans=ans+right-a[j];
                   }
                   j--;
               }
         }
         return ans;
    }
};