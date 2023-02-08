https://leetcode.com/problems/4sum/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& num, int target) {
        if(num.size()<=3)return {};
       std::sort(num.begin(), num.end());
       vector<vector<int>> res;
   for(int k=0;k<num.size();k++){
    for (int i = k+1; i < num.size(); i++) {
        int f = i + 1;
        int b = num.size() - 1;

        while (f < b) {

              long long int sum = num[k];
                    sum += num[i];
                    sum += num[f];
                    sum += num[b];
            if (sum < target)
                f++;

            else if (sum > target)
                b--;

            else {
                vector<int> v = {num[k],num[i], num[f], num[b]};
                res.push_back(v);
                while (f < b && num[f] == v[2]) f++;
                while (f < b && num[b] == v[3]) b--;
            }   
        }
        while (i + 1 < num.size() && num[i + 1] == num[i]) 
            i++;
    }
    while(k+1<num.size() && num[k+1]==num[k])
    k++;
    }
    return res;
    }
};
