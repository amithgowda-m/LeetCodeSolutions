class Solution {
public:
    long long gcd(long long a,long long b){
        if(b==0)return a;
        return gcd(b,a%b);
    }
    long long gcdSum(vector<int>& nums) {
        if(nums.empty())return 0;
        vector<long long> prefixGcd;
        int curMax = nums[0];
        prefixGcd.push_back(gcd(nums[0],nums[0]));
        int n = nums.size();
        for(int i =1;i<n;i++){
            curMax = max(nums[i],curMax);
            prefixGcd.push_back(gcd(nums[i],curMax));
        }
        long long total =0;
        sort(prefixGcd.begin(),prefixGcd.end());

        for(int i=0;i<n/2;i++){
            total+=gcd(prefixGcd[i],prefixGcd[n-i-1]);
        }
        return total;
    }
};