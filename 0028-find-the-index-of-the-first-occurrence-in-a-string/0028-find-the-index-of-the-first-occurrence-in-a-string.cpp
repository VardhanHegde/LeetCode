class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length(),m=needle.length();
        vector<int> ST (256,m);
        for(int i=0;i<m-1;i++)
        {
            ST[(int)needle[i]] = m-1-i;
        }
        int j= m-1;
        while(j <= n-1){
            int k=0;
            while(k <= m-1 && needle[m-1-k] == haystack[j-k])
                k++;
            if(k == m)
            {
                return j-m+1;
            }
            else
            {
                j += ST[(int)haystack[j]];
            }
        }
        return -1;
    } 
};