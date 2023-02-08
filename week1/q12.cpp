https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& a) {
        for(int i=0;i<a.size();i++)
        {
            int p=abs(a[i]);
            if(a[p]>0)
            {
                  a[p]=-1*a[p];
            }
            else
            {
                return abs(p);
            }
        }
            return -1;
    }
};
