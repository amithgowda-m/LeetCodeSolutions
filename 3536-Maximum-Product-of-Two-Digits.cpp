class Solution {
public:
    int maxProduct(int n) {
        int max1 = INT_MIN , max2 =INT_MIN;
        while(n !=0){
            int mod= n % 10;
            if(max1 <= mod){
                max2 = max1;
                max1 = mod;
            }
            else if(max2 < mod){
                max2 = mod;
            }
            n /= 10;
        }
        return max1 * max2;
    }
};