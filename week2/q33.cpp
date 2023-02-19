#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first)return a.second<b.second;
    return a.first>b.first;
}
int main() {
	//code
	int tests;
	cin>>tests;
	while(tests--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        m[a[i]]++;
	    }
	    vector<pair<int,int>> v;
	    for(auto i:m)
	    {
	        v.push_back({i.second,i.first});
	    }
	    sort(v.begin(),v.end(),cmp);
	     for(auto i:v)
	     {
	         int x=i.first;
	         int y=i.second;
	         while(x>0)
	         {
	             cout<<y<<" ";
	             x--;
	         }
	     }
	   cout<<"\n";
	    
	}
	return 0;
}