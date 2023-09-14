class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        string s= to_string(x);
        int n=s.length();
        int i=0,j=n-1;
        for(int i=0;i<=j;i++)
        {
            if(s[i]!=s[j])
                return false;
            j--;
        }
        return true;
    }
};