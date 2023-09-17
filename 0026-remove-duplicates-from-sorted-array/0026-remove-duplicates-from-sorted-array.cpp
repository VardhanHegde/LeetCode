class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(vector<int> :: iterator it = nums.begin();it < nums.end()-1;){
            if(*it == *(it+1)){
                it = nums.erase(it);
            }
            else{
                it++;
                k++;
            }
        }
        return k;
    }
};