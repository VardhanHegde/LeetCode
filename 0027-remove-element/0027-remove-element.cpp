class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;    
        for(vector<int>:: iterator it = nums.begin(); it!= nums.end();){
            if(*it == val)
                it = nums.erase(it);
            else
            {
                k++;
                it++;
            }
        }
        return k;
    }
};