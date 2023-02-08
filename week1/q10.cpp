https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

string reverseWord(string s){
    
  //Your code here
  int n=s.size();
  for(int i=0;i<n/2;i++)
  {
      swap(s[i],s[n-i-1]);
  }
  return s;
}
