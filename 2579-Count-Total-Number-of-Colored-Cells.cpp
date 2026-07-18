class Solution {
public:
    long long coloredCells(int n) {
        if(n==1) return 1;
        else return 2*n+1;
    }
};