class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        if(k==0) return;
        vector<int> temp(n);
        for(int i =0;i<n;i++){
            temp[(i+k)%n] = nums[i];
        }
        nums=temp;
        
    }
};