class Solution {
public:
    int romanToInt(string s) {
        int n=s.length(),sum=0;
        map<char,int> roman;
        roman.insert({'I',1});
        roman.insert({'V',5});
        roman.insert({'X',10});
        roman.insert({'L',50});
        roman.insert({'C',100});
        roman.insert({'D',500});
        roman.insert({'M',1000});
        for(int i=0;i<n;i++){
            if(roman[s[i]] < roman[s[i+1]])
            {
                sum += roman[s[i+1]] - roman[s[i]];
                i++;
                continue;
            }
            sum += roman[s[i]];
        }
        return sum;
    }
};