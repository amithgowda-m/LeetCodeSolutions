class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1) return;
        int kn = k%n;
        int m = n-kn;
        vector<int> ans;
        for(int i=m;i<n;i++) ans.push_back(nums[i]);
        for(int j=0;j<m;j++)  ans.push_back(nums[j]);
        for(int i=0;i<n;i++) nums[i]=ans[i];
    }
};