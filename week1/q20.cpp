https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        long long int a=0;
        int y=x;
        while(y>0)
        {
            int r=y%10;
            a=a*10+r;
            y=y/10;
        }
        if(a==x)
        return true;
        return false;
    }
};
