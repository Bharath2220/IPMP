https://www.geeksforgeeks.org/find-the-two-repeating-elements-in-a-given-array/

class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int a[], int n) {
        // Your code here
        vector<int> v;
        for(int i=0;i<n+2;i++)
        {
            int p=abs(a[i]);
            if(a[p]>0)
            {
                a[p]=-1*a[p];
            }
            else
            {
               v.push_back(p);
            }
        }
        return v;
    }
};
