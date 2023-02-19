class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here  
          int sum=0;
          int ans=INT_MIN;
          map<char,int> m;
          int s=0,start=-1,end=-1;
          for(int i=0;i<n;i++)
          {
              m[x[i]]=i;
          }
          for(int i=0;i<w.size();i++)
          {
               if(m.find(w[i])!=m.end())
                sum=sum+b[m[w[i]]];
                else
                sum=sum+w[i];
                if(ans<sum)
                {
                    ans=max(sum,ans);
                    start=s;
                    end=i;
                }
                if(sum<0)
                {
                    sum=0;
                    s=i+1;
                }
          }
          return w.substr(start,end-start+1);
      }
};