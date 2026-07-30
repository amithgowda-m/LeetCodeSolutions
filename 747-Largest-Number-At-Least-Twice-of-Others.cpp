class Solution {
public:
    int dominantIndex(vector<int>& nums) {  
        int mx= nums[0];
        int idx=0;
        for(int i = 1;i<nums.size();i++){
            if(nums[i]>mx){
                mx = nums[i];
                idx =i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(2*nums[i]>mx && i!=idx)return -1;
        }
        return idx;
    }
};