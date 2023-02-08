https://www.interviewbit.com/problems/3-sum-zero/


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    unordered_map<int,int>m;int k=nums.size();
       int count=0;
        vector<vector<int>> r;
       map<pair<int,int>,int>p;
        for(int i=0;i<nums.size();i++){if(nums[i]==0){count++;}
        m[nums[i]]++;}

if(count==k) return{{0,0,0}};
        int n=m.size();int b[n];
        int l=0;
        for(auto x=m.begin();x!=m.end();x++,l++)b[l]=x->first;
        for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            if(m[-(b[i]+b[j])]){
                int a[3]={b[i],b[j],-(b[i]+b[j])};
                sort(a,a+3);
                if(a[1]==a[0]&&m[a[1]]==1)continue;
                if(a[1]==a[2]&&m[a[1]]==1)continue;
                if(a[1]==0&&a[0]==0&&a[2]==0&&m[0]==2)continue;
                p[{a[0],a[1]}]=a[2];
            }
        for(auto x=p.begin();x!=p.end();x++)
            r.push_back({x->first.first,x->first.second,x->second});
        return r;
    }
};



///2nd method
