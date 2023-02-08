https://leetcode.com/problems/excel-sheet-column-number/

class Solution {
public:
    int titleToNumber(string s) {
          int n=s.size();
          int ans=0;
          for(int i=n-1;i>=0;i--)
          {
                ans=ans+pow(26,n-i-1)*(s[i]-64);
          }
          return ans;
    }
};
