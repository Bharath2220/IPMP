https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int count=0;
        int n=a.size();
        int k=0;
        for(int i=0;i<n;i++)
        {
             count+=(a[i]==0);
             if(a[i]!=0)
             {
             a[k]=a[i];
             k++;
             }
        }
        for(int i=k;i<n;i++)
        {
            a[i]=0;
        }
        
    }
};
