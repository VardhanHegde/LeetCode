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

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int index = 0;
//         for(int i = 0; i< nums.size(); i++){
//             if(nums[i] != val){
//                 nums[index] = nums[i];
//                 index++;
//             }
//         }
//         return index;
//     }
// };