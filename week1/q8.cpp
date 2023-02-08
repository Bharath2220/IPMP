https://www.geeksforgeeks.org/find-the-two-numbers-with-odd-occurences-in-an-unsorted-array/


class Solution
{
public:
    vector<int> singleNumber(vector<int> a) 
    {
        // Code here.
        unordered_set<int> s;
        for(int i:a)
        {
            if(s.find(i)!=s.end())
            {
                s.erase(i);
            }
            else
            {
                s.insert(i);
            }
        }
        vector<int> v;
        for(auto i:s)
        {
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        return v;
    }
};
