https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

class Solution {
public:
    void sortColors(vector<int>& a) {
        map<int,int> m;
        for(int i=0;i<a.size();i++)
        {
              m[a[i]]++;
        }
        int k=0;
        for(int j=0;j<3;j++)
        {
            for(int i=k;i<k+m[j];i++)
            {
             a[i]=j;
            }
            k=k+m[j];
        }
    }
};
